#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#include "music.h"
#include "address_map_arm.h"
#include "project_main.h"
#include "audio_stream.h"

const double pi = 3.14159265358979323846;
const int sampling_frequency = 8000;
const double sampling_period = 0.000125;
const double default_amplitude = INT_MAX / 500;

#define MAX_HARMONICS 7
#define INCR_RES_CUTOFF 20

const double harmonic_sensitivity = 0.55;

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
	
	return number + ((octave + 1) * 12);
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
		music_cache.cache_lines[i].waveforms = malloc(sizeof(double *) * MAX_HARMONICS);
		music_cache.cache_lines[i].allocated_lengths = malloc(sizeof(unsigned int *) * MAX_HARMONICS);
		music_cache.cache_lines[i].used_lengths = malloc(sizeof(unsigned int *) * MAX_HARMONICS);
		music_cache.cache_lines[i].quality = 0;
		
		//initialize all variables for each harmonic quality
		for(unsigned int j = 0; j < MAX_HARMONICS; j++){
			music_cache.cache_lines[i].waveforms[j] = NULL;
			music_cache.cache_lines[i].allocated_lengths[j] = 0;
			music_cache.cache_lines[i].used_lengths[j] = 0;
		}
	}
}

//expands the given line
void expand_cache_line(struct CacheWave * cache_line, unsigned int overtone){
	//allocate space for the new array
	unsigned int new_length	= (cache_line->allocated_lengths[overtone] << 1) | 0b1;
	double * new_array = malloc(sizeof(double) * new_length);
	
	//copy over all used samples in the array
	for(unsigned int i = 0; i < cache_line->used_lengths[overtone]; i++){
		new_array[i] = cache_line->waveforms[overtone][i];
	}
	
	//free the old array
	free(cache_line->waveforms[overtone]);
	
	//store the new array where the old array was
	cache_line->waveforms[overtone] = new_array;
	
	//update the allocated space
	cache_line->allocated_lengths[overtone] = new_length;
}

//returns the value for the sine and upgrades quality in cache if necessary
double calc_sine(struct CacheWave * cache_line, unsigned int index, double frequency, double current_time, unsigned int target_quality){
	double sample = 0;
	
	//for each overtone check and retrieve the sample in the cache up to the target quality
	for(unsigned int overtone = 0; frequency * (overtone + 1) < MAX_FREQUENCY && overtone < target_quality; overtone++){
		//generate the sample if needed first
		if(index >= cache_line->used_lengths[overtone]){
			//expand the cache if needed prior to creating a new sample
			if(cache_line->used_lengths[overtone] >= cache_line->allocated_lengths[overtone]){
				expand_cache_line(cache_line, overtone);
			}
			
			//generate the sample and store
			cache_line->waveforms[overtone][index] = pow(harmonic_sensitivity, overtone) * sin((overtone + 1) * 2 * pi * frequency * current_time);
			
			//increment length to match
			cache_line->used_lengths[overtone]++;
		}
		
		sample += cache_line->waveforms[overtone][index];
	}
	
	return sample;
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
	
	//determine a target quality to compute for
	struct CacheWave * cache_line = &music_cache.cache_lines[note_number];
	double time_ratio = (get_time_left() / music_note.duration);
	unsigned int target_quality;
	
	//only upgrade the quality by one (only need to generate the highest overtone)
	if(time_ratio < INCR_RES_CUTOFF){
		target_quality = 1;
	} else {
		for(target_quality = 1; target_quality < MAX_HARMONICS; target_quality++){
			if(cache_line->used_lengths[target_quality - 1] < number_of_samples){
				break;
			}
		}
	}
	
	//loop through the entire array, taking samples of the wave at each time given
	for(unsigned int index = 0; index < number_of_samples; index++){
		//retrieve the sample of the target quality
		wave_array[index] = calc_sine(cache_line, index, frequency, current_time, target_quality);
		
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
	
	//update the quality of the cache line edited if it was increased
	if(cache_line->quality < target_quality)
		cache_line->quality = target_quality;
	
	//return the sampled wave
	struct MusicWave wave = {.waveform = wave_array, .length = number_of_samples};
	return wave;
}