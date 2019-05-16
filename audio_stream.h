#ifndef d_audio_stream
#define d_audio_stream

#include <stdbool.h>

#include "music.h"

struct MusicWaveNode{
	struct MusicWave wave;
	struct MusicWaveNode * next;
};

struct AudioStream {
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
	
	//current song being played
	struct MusicSong current_song;
};

void advance_stream(struct MusicWaveNode ** front_node);
void populate_stream();
void clear_stream();
bool is_stream_valid();
double get_sample_R();
double get_sample_L();

#endif