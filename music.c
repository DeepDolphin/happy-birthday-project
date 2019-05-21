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

const double num_harmonics = 3;
const double harmonic_intensities[] = {1, 0.5, 0.25};

extern struct StatusFlags status_flags;

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

//returns a dynamically allocated array representing the wave intensity of each sample for the note
struct MusicWave get_note_wave(struct MusicNote music_note){
	//find the number of samples for the duration given
	unsigned int number_of_samples = (unsigned int) floor(music_note.duration * sampling_frequency);
	
	//preallocate enough space for all samples
	double * wave_array = malloc(number_of_samples * sizeof(double));
	
	//find the frequency for the given note and octave
	double frequency;
	if(!strcmp(music_note.note, "S")){ //if the note is silent, return no frequency and zero the intensity
		frequency = 0;
	} else {
		frequency = get_frequency(music_note.note, music_note.octave);
		
		//check for fundamental frequency overflow
		if(frequency > MAX_FREQUENCY)
			status_flags.frequency_overflow = true;
	}
	
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
		
		//add each wanted harmonic of the note given
		for(unsigned int harmonic = 1; harmonic <= num_harmonics; harmonic++){
			//check for frequency overflow
			if(frequency * harmonic < MAX_FREQUENCY)
				wave_array[index] += harmonic_intensities[harmonic] * sin(harmonic * 2 * pi * frequency * current_time);
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