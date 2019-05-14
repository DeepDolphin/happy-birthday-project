#ifndef project_main
#define project_main

#include <stdbool.h>

struct MusicWaveNode{
	struct MusicWave wave;
	struct MusicWaveNode * next;
};

struct AudioStream{
	//current location within the top music wave
	unsigned int current_location_R;
	unsigned int current_location_L;
	
	//top of the music wave queue	
	struct MusicWaveNode * list_front_R;
	struct MusicWaveNode * list_front_L;
	
	//bottom of the music wave queue
	struct MusicWaveNode * list_back_R;
	struct MusicWaveNode * list_back_L;
	
	//current location within the song (of the bottom of the queue)
	unsigned int current_song_location;
	
	//length of the queue
	unsigned int length_R;
	unsigned int length_L;
};

struct StatusFlags{
	//set flag to initiate a queue clear next iteration in main
	bool clear_queue;
	
	//set flag to change the song to the one selected by switches (also clears the queue)
	bool change_song;
	
	//flag to represent play/stop status
	bool is_playing;
};

bool write_wave(unsigned int * num_samples, volatile int * audio_fifo, struct MusicWave wave, unsigned int * current_location);
void advance_stream(struct MusicWaveNode ** front_node);
void populate_stream();
void clear_stream();
void stop_audio_playback(unsigned int * num_samples, volatile int * audio_fifo);
void stop_all_audio_playback();
void start_audio_playback();
void display_status();

#endif