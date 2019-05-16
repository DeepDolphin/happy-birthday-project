#ifndef project_main
#define project_main

#include <stdbool.h>

struct StatusFlags{
	//set flag to initiate a queue clear next iteration in main
	bool clear_queue;
	
	//set flag to change the song to the one selected by switches (also clears the queue)
	bool change_song;
	
	//flag to represent play/stop status
	bool is_playing;
};

void stop_audio_playback(unsigned int * num_samples, volatile int * audio_fifo);
void stop_all_audio_playback();
void start_audio_playback();
void display_status();

#endif