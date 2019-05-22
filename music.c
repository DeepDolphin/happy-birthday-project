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

const double num_harmonics = 1;
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

struct MusicWave example_sine = {.waveform = (double[]) {0, 0.0627905195293134, 0.125333233564304, 0.187381314585725, 0.248689887164855, 0.309016994374947, 0.368124552684678, 0.425779291565073, 0.481753674101715, 0.535826794978997, 0.587785252292473, 0.63742398974869, 0.684547105928689, 0.728968627421412, 0.770513242775789, 0.809016994374948, 0.844327925502015, 0.876306680043864, 0.90482705246602, 0.929776485888252, 0.951056516295154, 0.968583161128631, 0.982287250728689, 0.992114701314478, 0.998026728428272, 1, 0.998026728428272, 0.992114701314478, 0.982287250728689, 0.968583161128631, 0.951056516295154, 0.929776485888251, 0.904827052466019, 0.876306680043864, 0.844327925502015, 0.809016994374948, 0.770513242775789, 0.728968627421412, 0.684547105928689, 0.637423989748691, 0.587785252292474, 0.535826794978998, 0.481753674101716, 0.425779291565074, 0.368124552684679, 0.309016994374949, 0.248689887164857, 0.187381314585727, 0.125333233564306, 0.0627905195293158, 2.34290668463255E-15, -0.0627905195293107, -0.125333233564302, -0.187381314585722, -0.248689887164852, -0.309016994374946, -0.368124552684676, -0.425779291565071, -0.481753674101714, -0.535826794978996, -0.587785252292472, -0.637423989748689, -0.684547105928688, -0.728968627421411, -0.770513242775789, -0.809016994374947, -0.844327925502015, -0.876306680043864, -0.90482705246602, -0.929776485888252, -0.951056516295154, -0.968583161128631, -0.982287250728689, -0.992114701314478, -0.998026728428272, -1, -0.998026728428271, -0.992114701314478, -0.982287250728688, -0.96858316112863, -0.951056516295153, -0.92977648588825, -0.904827052466018, -0.876306680043862, -0.844327925502013, -0.809016994374945, -0.770513242775786, -0.728968627421408, -0.684547105928685, -0.637423989748686, -0.587785252292468, -0.535826794978992, -0.48175367410171, -0.425779291565067, -0.368124552684672, -0.309016994374941, -0.248689887164848, -0.187381314585718, -0.125333233564297, -0.0627905195293053}, .length = 100};
	
//returns the value for a sine wave at the asked time and frequency
double calc_sine(double time, double frequency){
	if(*((int *) SW_BASE) == 0x200){
		double sampling_rate = example_sine.length * frequency;
		double period = 1 / frequency;
		
		//ensure index is within the waveform
		unsigned int index_left = ((unsigned int) floor(time * sampling_rate)) % example_sine.length;
		unsigned int index_right = ((unsigned int) ceil(time * sampling_rate)) % example_sine.length;
		
		if(index_left != index_right){
			//interpolate between the two points of the example sinewave
			double delta_value = example_sine.waveform[index_right] - example_sine.waveform[index_left];
			double delta_time = 1 / sampling_rate;
			double initial_time = index_left * sampling_rate;
			double initial_value = example_sine.waveform[index_left];
			
			double value = delta_value / delta_time * (time - initial_time) + initial_value;
			
			return value;
		} else {
			return example_sine.waveform[index_left];
		}
	} else {
		return sin(2 * pi * frequency * time);
	}
}

//returns a dynamically allocated array representing the wave intensity of each sample for the note
struct MusicWave get_note_wave(struct MusicNote music_note){
	//find the number of samples for the duration given
	unsigned int number_of_samples = (unsigned int) floor(music_note.duration * sampling_frequency);
	
	//preallocate enough space for all samples
	double * wave_array = malloc(number_of_samples * sizeof(double));
	
	//find the frequency for the given note and octave
	double frequency;
	if(!strcmp(music_note.note, "S")){ //if the note is silent, return an empty array
		for(int i = 0; i < number_of_samples; i++){
			wave_array[i] = 0;
		}
		
		struct MusicWave wave = {.waveform = wave_array, .length = number_of_samples};
		return wave;
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
		wave_array[index] = 0;
		
		//add each wanted harmonic of the note given
		for(unsigned int harmonic = 1; harmonic <= num_harmonics; harmonic++){
			//check for frequency overflow
			if(frequency * harmonic < MAX_FREQUENCY)
				wave_array[index] += harmonic_intensities[harmonic - 1] * calc_sine(current_time, harmonic * frequency);
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