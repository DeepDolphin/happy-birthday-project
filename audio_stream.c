#include <stdlib.h>
#include <stdbool.h>

#include "audio_stream.h"

struct AudioStream audio_stream;

void populate_stream(){
	//check to make sure there is more song left
	if(audio_stream.current_song_location >= audio_stream.current_song.length) return;
	
	//add a new node to the back of each queue
	struct MusicWaveNode * node_R = malloc(sizeof(struct MusicWaveNode));
	struct MusicWaveNode * node_L = malloc(sizeof(struct MusicWaveNode));
	
	node_R->wave = get_chord_wave(audio_stream.current_song.music_chords[audio_stream.current_song_location]);
	node_L->wave = copy_wave(node_R->wave);
	
	node_R->next = NULL;
	node_L->next = NULL;
	
	//append the node to the back of the queue
	if(audio_stream.list_back_R != NULL)
		audio_stream.list_back_R->next = node_R;
	if(audio_stream.list_back_L != NULL)
		audio_stream.list_back_L->next = node_L;
	
	audio_stream.list_back_R = node_R;
	audio_stream.list_back_L = node_L;
	
	//if the front of the list is null, the added node is also the front of the list
	if(audio_stream.list_front_R == NULL) audio_stream.list_front_R = audio_stream.list_back_R;
	if(audio_stream.list_front_L == NULL) audio_stream.list_front_L = audio_stream.list_back_L;
	
	//increment the location to be the next note to be processed
	audio_stream.current_song_location++;
	
	//increase the length of the audioaudio_stream
	audio_stream.length_R++;
	audio_stream.length_L++;
}

void clear_stream(){
	//clear the right side
	while(audio_stream.list_front_R != NULL)
		advance_stream(&audio_stream.list_front_R);
	
	audio_stream.list_back_R = NULL;
	audio_stream.current_location_R = 0;
	audio_stream.length_R = 0;
	
	//clear the left side
	while(audio_stream.list_front_L != NULL)
		advance_stream(&audio_stream.list_front_L);
	
	audio_stream.list_back_L = NULL;
	audio_stream.current_location_L = 0;
	audio_stream.length_L = 0;
	
	//reset song location so processing can begin again
	audio_stream.current_song_location = 0;
}

void advance_stream(struct MusicWaveNode ** front_node){
	//save a copy of the pointer to the next node
	struct MusicWaveNode * next_node = (*front_node)->next;
	
	//free the memory from both the waveform and the node
	free((*front_node)->wave.waveform);
	free(*front_node);
	
	//reattach the rest of the queue to the front
	*front_node = next_node;
}

bool is_stream_valid(){
	return audio_stream.list_front_R != NULL && audio_stream.list_front_L != NULL;
}

double get_sample_R(){
	//store the sample to be returned
	double to_return = audio_stream.list_front_R->wave.waveform[audio_stream.current_location_R];
	
	//increment the next sample location
	audio_stream.current_location_R++;
	
	//if the current wave has reached the end, advance and reset location/length
	if(audio_stream.current_location_R == audio_stream.list_front_R->wave.length){
		advance_stream(&audio_stream.list_front_R);
		audio_stream.current_location_R = 0;
		audio_stream.length_R--;
	}
	
	return to_return;	
}

double get_sample_L(){
	//store the sample to be returned
	double to_return = audio_stream.list_front_L->wave.waveform[audio_stream.current_location_L];
	
	//increment the next sample location
	audio_stream.current_location_L++;
	
	//if the current wave has reached the end, advance and reset location/length
	if(audio_stream.current_location_L == audio_stream.list_front_L->wave.length){
		advance_stream(&audio_stream.list_front_L);
		audio_stream.current_location_L = 0;
		audio_stream.length_L--;
	}
	
	return to_return;
}