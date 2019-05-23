#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#include "music.h"
#include "address_map_arm.h"
#include "project_main.h"

const double pi = 3.14159265358979323846;
const int sampling_frequency = 8000;
const double sampling_period = 0.000125;
const double default_amplitude = INT_MAX / 500;

const double harmonic_sensitivity = 0.7;
const unsigned int max_harmonics = 7;

struct MusicCache music_cache;

extern struct StatusFlags status_flags;

//returns the frequency requested of the key number given
double get_frequency(int key_number){
	const double middle_A_freq = 440; //Hz
	const int middle_A_num = get_num("A", 4); //number pertaining to the middle A
	
	const double semitone_mult = pow(2, (1.0/12.0)); //change in frequency when going up or down one key
	double semitone_jump = key_number - middle_A_num; //number of jumps from key requested to middle A
	
	double change_in_freq = pow(semitone_mult, semitone_jump);
	
	return change_in_freq * middle_A_freq;
}

//returns the key number requested of the note and octave given
int get_num(char * note, int octave){	
	int number;
	if(!strcmp(note, "C")){
		number = 0;
	} else if(!strcmp(note, "Cs") || !strcmp(note, "Db")){
		number = 1;
	} else if(!strcmp(note, "D")){
		number = 2;
	} else if(!strcmp(note, "Ds") || !strcmp(note, "Eb")){
		number = 3;
	} else if(!strcmp(note, "E")){
		number = 4;
	} else if(!strcmp(note, "F")){
		number = 5;
	} else if(!strcmp(note, "Fs") || !strcmp(note, "Gb")){
		number = 6;
	} else if(!strcmp(note, "G")){
		number = 7;
	} else if(!strcmp(note, "Gs") || !strcmp(note, "Ab")){
		number = 8;
	} else if(!strcmp(note, "A")){
		number = 9;
	} else if(!strcmp(note, "As") || !strcmp(note, "Bb")){
		number = 10;
	} else if(!strcmp(note, "B")){
		number = 11;
	} else {
		while (1);
	}
	
	return number + (octave * 12);
}

//returns a dynamically allocated array representing the wave intensity of each sample for the chord
struct MusicWave get_chord_wave(struct MusicChord music_chord){
	//find the number of samples for the duration given
	unsigned int number_of_samples = (unsigned int) floor(music_chord.duration * sampling_frequency);
	
	//the full wave of all notes summed together
	double * wave_array = malloc(number_of_samples * sizeof(double));
	
	//initialize the wave array to zero
	for(unsigned int i = 0; i < number_of_samples; i++){
		wave_array[i] = 0;
	}
	
	//generate the music wave for each individual note and sum together
	struct MusicWave note_wave;
	for(unsigned int i = 0; i < music_chord.num_notes; i++){
		note_wave = get_note_wave(music_chord.music_notes[i]);
		
		for(unsigned int j = 0; j < note_wave.length; j++){
			wave_array[j] += note_wave.waveform[j];
		}
		
		free(note_wave.waveform);
	}

	struct MusicWave wave = {.waveform = wave_array, .length = number_of_samples};
	return wave;
}

//initializes the music cache
void initialize_cache(){
	//allocate space for all lines 0-127
	music_cache.cache_lines = malloc(sizeof(struct CacheWave) * 128);
	
	for(unsigned int i = 0; i < 128; i++){
		//initialize all variables in the line
		music_cache.cache_lines[i].waveform = NULL;
		music_cache.cache_lines[i].allocated_length = 0;
		music_cache.cache_lines[i].used_length = 0;
	}
}

//expands the given line
void expand_cache_line(struct CacheWave * cache_line){
	//allocate space for the new array
	unsigned int new_length	= (cache_line->allocated_length << 1) | 0b1;
	double * new_array = malloc(sizeof(double) * new_length);
	
	//copy over all used samples in the array
	for(unsigned int i = 0; i < cache_line->used_length; i++){
		new_array[i] = cache_line->waveform[i];
	}
	
	//free the old array
	free(cache_line->waveform);
	
	//store the new array where the old array was
	cache_line->waveform = new_array;
	
	//update the allocated space
	cache_line->allocated_length = new_length;
}

//returns a dynamically allocated array representing the wave intensity of each sample for the note
struct MusicWave get_note_wave(struct MusicNote music_note){
	//find the number of samples for the duration given
	unsigned int number_of_samples = (unsigned int) floor(music_note.duration * sampling_frequency);
	
	//preallocate enough space for all samples
	double * wave_array = malloc(number_of_samples * sizeof(double));
	
	//if the note is silent, return an empty array
	if(!strcmp(music_note.note, "S")){ 
		for(int i = 0; i < number_of_samples; i++){
			wave_array[i] = 0;
		}
		
		struct MusicWave wave = {.waveform = wave_array, .length = number_of_samples};
		return wave;
	}
	
	//find the frequency for the given note and octave
	int note_number = get_num(music_note.note, music_note.octave);
	double frequency = get_frequency(note_number);
		
	//check for fundamental frequency overflow or the note number is out of bounds
	if(frequency > MAX_FREQUENCY || (note_number < 0 || note_number > 127))
		status_flags.frequency_overflow = true;
	
	//set the current time to zero at the beginning of the wave
	double current_time = 0;
	
	//find the index of the start of each stage in the adsr envelope
	unsigned int delay_start = (unsigned int) floor(music_note.adsr_envelope[0] * number_of_samples);
	unsigned int sustain_start = (unsigned int) floor(delay_start + music_note.adsr_envelope[1] * number_of_samples);
	unsigned int release_start = (unsigned int) floor(sustain_start + music_note.adsr_envelope[2] * number_of_samples);
	
	//the volumes of each part of the envelope
	double peak_volume = music_note.peak_intensity * default_amplitude;
	double sustain_volume = music_note.sustain_intensity * default_amplitude;
	double sample_volume;
	
	//loop through the entire array, taking samples of the wave at each time given
	for(unsigned int index = 0; index < number_of_samples; index++){
		struct CacheWave * cache_line = &music_cache.cache_lines[note_number];
		
		//check the cache if there exists a sample already calculated
		if(index < cache_line->used_length){
			//copy cache sample to current wave
			wave_array[index] = cache_line->waveform[index];
			
		} else {
			//expand the cache if needed prior to creating a new sample
			if(cache_line->used_length >= cache_line->allocated_length){
				expand_cache_line(cache_line);
			}
			
			//create the sample since it doesn't exist in cache
			wave_array[index] = 0;
		
			//add each wanted harmonic of the note given as long as it doesn't overflow
			for(unsigned int harmonic = 1; frequency * harmonic < MAX_FREQUENCY && harmonic < max_harmonics; harmonic++){
				wave_array[index] += pow(harmonic_sensitivity, harmonic - 1) * sin(harmonic * 2 * pi * frequency * current_time);
			}
			
			//copy sample to cache
			cache_line->waveform[index] = wave_array[index];
			
			//increment length to match
			cache_line->used_length++;
		}
		
		//apply an adsr envelope
		if(wave_array[index] != 0){
			//check which stage the sample is part of
			if(index < delay_start){ //part of attack
				sample_volume = (peak_volume / delay_start) * index;
			} else if (index < sustain_start){ //part of delay
				sample_volume = peak_volume - (((peak_volume - sustain_volume) / (sustain_start - delay_start)) * (index - delay_start));
			} else if (index < release_start){ //part of sustain
				sample_volume = sustain_volume;
			} else { //part of release
				sample_volume = sustain_volume - ((sustain_volume / (number_of_samples - release_start)) * (index - release_start));
			}
			
			wave_array[index] *= sample_volume;
		}
		
		//increment the current time
		current_time += sampling_period;
	}
	
	//return the sampled wave
	struct MusicWave wave = {.waveform = wave_array, .length = number_of_samples};
	return wave;
}