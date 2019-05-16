#include "exceptions.h"
#include "config_A9_interrupts.h"
#include "music.h"
#include "audio_stream.h"
#include "address_map_arm.h"
#include "project_main.h"
#include "songs.h"
#include "utilities.c"

#include <stdbool.h>
#include <stdlib.h>
#include <limits.h>

extern struct AudioStream audio_stream;
struct StatusFlags status_flags = {.clear_queue = false, .change_song = false, .is_playing = false};
unsigned int volume = 10;
const unsigned int max_volume = 20, min_volume = 1;

int main(){
	volatile int * sw_base = (int*) SW_BASE;
	
	//configure the interrupts and hardware components
	set_A9_IRQ_stack();
	config_GIC();
	config_audio();
	config_keys();
					
	//set the current song to the test song
	audio_stream.current_song = test_song;
	
	//enable interrupts once all setup is finished
	enable_A9_interrupts();
	
	//main loop
	while(1){
		//continue to populate the audio_stream
		populate_stream();
		
		//clear the audio_stream if requested
		if(status_flags.clear_queue || status_flags.change_song){
			clear_stream();
			
			//reset the flag so that clearing does not happen again
			status_flags.clear_queue = false;
		}
		
		//change current song if requested
		if(status_flags.change_song){
			int switches = *sw_base;
		
		
			//reset the flag so that changing the song does not happen again
			status_flags.change_song = false;
		}
		
		//display status on leds and hexes
		display_status();
	}
	
	return 0;
}

void display_status(){
	volatile int * ledr_base = (int*) LEDR_BASE;
	volatile int * hex3_hex0_base = (int*) HEX3_HEX0_BASE;
	volatile int * hex5_hex4_base = (int*) HEX5_HEX4_BASE;
	
	//store all ledr displays
	int to_display_on_ledr = 0;
	
	//display if the audio_stream has been fully populated
	if (audio_stream.current_song_location == audio_stream.current_song.length) 
		to_display_on_ledr = 0b1;
	else 
		to_display_on_ledr = 0b0;
	
	//store all hex displays
	int to_display_on_hex3_hex0 = 0;
	int to_display_on_hex5_hex4 = 0;
	
	//display the current volume on the hexes
	to_display_on_hex3_hex0 = num_to_seg7_dec(volume);
	
	//display the current length on the hexes as well
	to_display_on_hex3_hex0 = to_display_on_hex3_hex0 | (num_to_seg7_hex(audio_stream.length_R) << 16);
	to_display_on_hex5_hex4 = num_to_seg7_hex(audio_stream.length_L);
	
	//display on hex and ledr
	*ledr_base = to_display_on_ledr;
	*hex3_hex0_base = to_display_on_hex3_hex0;
	*hex5_hex4_base = to_display_on_hex5_hex4;
}

void stop_all_audio_playback(){
	volatile int * audio_base = (int *) AUDIO_BASE;
	
	unsigned int fifo_space = *(audio_base + 1);
	
	//stop audio playback for the right
	unsigned int num_samples_right = (unsigned int) ((fifo_space >> 16) & 0xFF);
	stop_audio_playback(&num_samples_right, audio_base + 3);
	
	//stop audio playback for the left
	unsigned int num_samples_left = (unsigned int) ((fifo_space >> 24) & 0xFF);
	stop_audio_playback(&num_samples_left, audio_base + 2);
}

void stop_audio_playback(unsigned int * num_samples, volatile int * audio_fifo){	
	while (*num_samples > 0){
		//write nothing to the audio fifo (merely to clear the interrupt)
		*audio_fifo = 0;
		
		//advance the number of samples
		*num_samples = *num_samples - 1;
	}
	
	//turn off interrupts
	volatile int * audio_base = (int*) AUDIO_BASE;
	*audio_base = 0b0000;
	
	//set the status flags
	status_flags.is_playing = false;
}

void start_audio_playback(){
	//check to see if the audio_stream is valid
	if(audio_stream.list_front_L == NULL || audio_stream.list_front_R == NULL) return;
	
	//turn on interrupts
	volatile int * audio_base = (int*) AUDIO_BASE;
	*audio_base = 0b0010;
	
	//reset location of the audio audio_stream
	audio_stream.current_location_R = 0;
	audio_stream.current_location_L = 0;
	
	//set the playing flag
	status_flags.is_playing = true;
}

bool write_wave(unsigned int * num_samples, volatile int * audio_fifo, struct MusicWave wave, unsigned int * current_location){
	while (*num_samples > 0){
		//check to make sure your current location isn't at the end of the waveform
		if(*current_location == wave.length) return true;	
		
		//write the current sample
		*audio_fifo = (int) (volume * wave.waveform[*current_location]);
		
		//update the number of samples left
		*num_samples = *num_samples - 1;
		
		//update current location
		*current_location = *current_location + 1;
	}
	
	return false;
}

void keys_ISR(){
	volatile int * key_base = (int*) KEY_BASE;
	
	//read the reset the edgecapture bits
	int edgecapture = *(key_base + 3);
	*(key_base + 3) = edgecapture;
	
	//play selected song with key press 0
	if(edgecapture & 0b0001){		
		if(status_flags.is_playing){
			stop_all_audio_playback();
		} else {
			start_audio_playback();
		}
	}
	
	//change song to selected on switches and clear current queue if key press 1
	if(edgecapture & 0b0010){
		status_flags.change_song = true;
		
		//stop playing if there is a song currently playing
		if(status_flags.is_playing){
			stop_all_audio_playback();
		}
	}
	
	//increase volume if key press 2
	if(edgecapture & 0b0100){
		if(volume < max_volume) volume++;
	}
	
	//decrease volume if key press 3
	if(edgecapture & 0b1000){
		if(volume > min_volume) volume--;
	}
}

void audio_ISR(){
	//catch if there is nothing to write to the audio queue
	if(audio_stream.list_front_R == NULL || audio_stream.list_front_L == NULL) while (1);
	
	volatile int * audio_base = (int *) AUDIO_BASE;
	
	unsigned int fifo_space = *(audio_base + 1);
		
	//check the right write availability
	unsigned int num_samples_right = (unsigned int) ((fifo_space >> 16) & 0xFF);
	while(write_wave(&num_samples_right, audio_base + 3, audio_stream.list_front_R->wave, &audio_stream.current_location_R)){
		if(audio_stream.list_front_R == audio_stream.list_back_R){
			stop_audio_playback(&num_samples_right, audio_base + 3);
			status_flags.clear_queue = true;
		}
		
		advance_stream(&audio_stream.list_front_R);
		audio_stream.current_location_R = 0;
		audio_stream.length_R--;
	}
	
	//check the left write availability
	unsigned int num_samples_left = (unsigned int) ((fifo_space >> 24) & 0xFF);
	while(write_wave(&num_samples_left, audio_base + 2, audio_stream.list_front_L->wave, &audio_stream.current_location_L)){
		if(audio_stream.list_front_L == audio_stream.list_back_L){
			stop_audio_playback(&num_samples_left, audio_base + 2);
			status_flags.clear_queue = true;
		}
		
		advance_stream(&audio_stream.list_front_L);
		audio_stream.current_location_L = 0;
		audio_stream.length_L--;
	}
}