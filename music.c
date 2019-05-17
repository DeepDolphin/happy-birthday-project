#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>
#include <stdbool.h>

#include "music.h"
#include "address_map_arm.h"

const double pi = 3.14159265358979323846;
const int sampling_frequency = 8000;
const double sampling_period = 0.000125;
const double default_amplitude = INT_MAX / 400.0;

//returns the frequency requested of the key number given
double get_frequency(char * note, int octave){
	int key_number = get_num(note, octave);
	
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
		number = 1;
	} else if(!strcmp(note, "Cs") || !strcmp(note, "Db")){
		number = 2;
	} else if(!strcmp(note, "D")){
		number = 3;
	} else if(!strcmp(note, "Ds") || !strcmp(note, "Eb")){
		number = 4;
	} else if(!strcmp(note, "E")){
		number = 5;
	} else if(!strcmp(note, "F")){
		number = 6;
	} else if(!strcmp(note, "Fs") || !strcmp(note, "Gb")){
		number = 7;
	} else if(!strcmp(note, "G")){
		number = 8;
	} else if(!strcmp(note, "Gs") || !strcmp(note, "Ab")){
		number = 9;
	} else if(!strcmp(note, "A")){
		number = 10;
	} else if(!strcmp(note, "As") || !strcmp(note, "Bb")){
		number = 11;
	} else if(!strcmp(note, "B")){
		number = 12;
	} else {
		while (1);
	}
	
	return number + (octave * 12);
}

const double percent_lengths_ADSR[4] = {0.1, 0.4, 0.4, 0.1}; //represents the lengths of each stage of the adsr envelope (must add up to 1)
//returns a dynamically allocated array representing the wave intensity of each sample for the chord
struct MusicWave get_chord_wave(struct MusicChord music_chord){
	//find the number of samples for the duration given
	unsigned int number_of_samples = (unsigned int) floor(music_chord.duration * sampling_frequency);
	
	//find the index of the start of each stage in the adsr envelope
	unsigned int delay_start = (unsigned int) floor(percent_lengths_ADSR[0] * number_of_samples);
	unsigned int sustain_start = (unsigned int) floor(delay_start + percent_lengths_ADSR[1] * number_of_samples);
	unsigned int release_start = (unsigned int) floor(sustain_start + percent_lengths_ADSR[2] * number_of_samples);
	
	//the full wave of all notes summed together
	double * wave_array = malloc(number_of_samples * sizeof(double));
	
	//initialize the wave array to zero
	for(unsigned int i = 0; i < number_of_samples; i++){
		wave_array[i] = 0;
	}
	
	//generate the music wave for each individual note and sum together
	struct MusicWave note_wave;
	for(unsigned int i = 0; i < music_chord.num_notes; i++){
		note_wave = get_note_wave(music_chord.music_notes[i], number_of_samples);
		
		for(unsigned int j = 0; j < number_of_samples; j++){
			wave_array[j] += note_wave.waveform[j];
		}
		
		free(note_wave.waveform);
	}
	
	//increase the volume of the wave and apply adsr envelope if wanted
	double peak_volume = music_chord.intensity * default_amplitude;
	double sustain_volume = 0.4 * peak_volume;
	bool apply_ADSR_envelope = (*((int *) SW_BASE) >> 9) == 0b1;
	for(unsigned int i = 0; i < number_of_samples; i++){
		if(apply_ADSR_envelope && wave_array[i] != 0){
			//check which stage the sample is part of
			if(i < delay_start){ //part of attack
				double sample_volume = (peak_volume / delay_start) * i;
				
				wave_array[i] *= sample_volume;
			} else if (i < sustain_start){ //part of delay
				double sample_volume = peak_volume - (((peak_volume - sustain_volume) / (sustain_start - delay_start)) * (i - delay_start));
				
				wave_array[i] *= sample_volume;
			} else if (i < release_start){ //part of sustain
				wave_array[i] *= sustain_volume;
			} else { //part of release
				double sample_volume = sustain_volume - ((sustain_volume / (number_of_samples - release_start)) * (i - release_start));
				
				wave_array[i] *= sample_volume;
			}
		} else {
			wave_array[i] *= sustain_volume;
		}
	}

	struct MusicWave wave = {.waveform = wave_array, .length = number_of_samples};
	return wave;
}

//returns a dynamically allocated array representing the wave intensity of each sample for the note
struct MusicWave get_note_wave(struct MusicNote music_note, unsigned int number_of_samples){
	//preallocate enough space for all samples
	double * wave_array = malloc(number_of_samples * sizeof(double));
	
	//find the frequency for the given note and octave
	double frequency;
	if(!strcmp(music_note.note, "S")){ //if the note is silent, return no frequency and zero the intensity
		frequency = 0;
	} else {
		frequency = get_frequency(music_note.note, music_note.octave);
	}
	
	//set the current time to zero at the beginning of the wave
	double current_time = 0;
	
	//loop through the entire array, taking samples of the wave at each time given
	for(unsigned int index = 0; index < number_of_samples; index++){
		//waveform of the fundamental harmonic
		wave_array[index] = sin(2 * pi * frequency * current_time);
		
		//add some of the second harmonic
		wave_array[index] += 0.5 * sin(4 * pi * frequency * current_time);
		
		//add some of the third harmonic
		wave_array[index] += 0.25 * sin(6 * pi * frequency * current_time);
		
		//increment the current time
		current_time += sampling_period;
	}
	
	//return the sampled wave
	struct MusicWave wave = {.waveform = wave_array, .length = number_of_samples};
	return wave;
}