#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

#include "music.h"

const double pi = 3.14159265358979323846;
const int sampling_frequency = 8000;
const double sampling_period = 0.000125;
const double default_amplitude = INT_MAX / 500.0;

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

//returns a dynamically allocated array representing the wave intensity of each sample
struct MusicWave get_wave(struct MusicNote music_note){
	//find the number of samples for the duration given
	unsigned int number_of_samples = (unsigned int) floor(music_note.duration * sampling_frequency);
	
	//preallocate enough space for all samples
	double * wave_array = malloc(number_of_samples * sizeof(double));
	
	//find the frequency and intensity for the given note and octave
	double frequency;
	double intensity;
	if(!strcmp(music_note.note, "S")){ //if the note is silent, return no frequency and zero the intensity
		frequency = 0;
		intensity = 0;
	} else {
		frequency = get_frequency(music_note.note, music_note.octave);
		intensity = music_note.intensity;
	}
	
	//set the current time to zero at the beginning of the wave
	double current_time = 0;
	
	//loop through the entire array, taking samples of the wave at each time given
	for(unsigned int index = 0; index < number_of_samples; index++){		
		wave_array[index] = intensity * default_amplitude * sin(2 * pi * frequency * current_time);
		
		current_time += sampling_period;
	}
	
	//return the sampled wave
	struct MusicWave wave = {.waveform = wave_array, .length = number_of_samples};
	return wave;
}

//returns a copy of the given music wave
struct MusicWave copy_wave(struct MusicWave wave){
	double * wave_array = malloc(wave.length * sizeof(double));
	
	for(unsigned int i = 0; i < wave.length; i++)
		wave_array[i] = wave.waveform[i];
	
	struct MusicWave wave_copy = {.waveform = wave_array, .length = wave.length};
	return wave_copy;
}