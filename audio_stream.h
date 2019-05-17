#ifndef d_audio_stream
#define d_audio_stream

#include <stdbool.h>

#include "music.h"

struct MusicWaveNode{
	struct MusicWave wave;
	struct MusicWaveNode * next;
};

struct AudioStream {
	//current locations within the top music wave of each track
	unsigned int * current_playback_locations;
	
	//current locations within the song tracks
	unsigned int * current_process_locations;
	
	//top of the music wave queue of each track
	struct MusicWaveNode ** queue_fronts;
	
	//bottom of the music wave queue of each track
	struct MusicWaveNode ** queue_backs;
	
	//current duration of the processed tracks
	double * durations;
	
	//current song being played
	struct MusicSong current_song;
};

void advance_stream(struct MusicWaveNode ** front_node);
void populate_stream();
void clear_stream();
void initialize_stream();
bool is_stream_valid();
unsigned int get_next_processed_track();
double get_time_left();
double get_sample(char playback_type);

#endif