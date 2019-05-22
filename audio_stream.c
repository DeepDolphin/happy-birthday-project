#include <stdlib.h>
#include <stdbool.h>

#include "audio_stream.h"

struct AudioStream audio_stream;
extern const double sampling_period;

//initializes the stream assuming the current song is correct
void initialize_stream(){
	//allocate memory for the stream
	audio_stream.current_playback_locations = malloc(sizeof(unsigned int) * audio_stream.current_song->num_tracks);
	audio_stream.current_process_locations = malloc(sizeof(unsigned int) * audio_stream.current_song->num_tracks);
	
	audio_stream.queue_fronts = malloc(sizeof(struct MusicWaveNode *) * audio_stream.current_song->num_tracks);
	audio_stream.queue_backs = malloc(sizeof(struct MusicWaveNode *) * audio_stream.current_song->num_tracks);
	
	audio_stream.durations = malloc(sizeof(double) * audio_stream.current_song->num_tracks);
	
	//initialize all variables
	for(unsigned int i = 0; i < audio_stream.current_song->num_tracks; i++){
		audio_stream.current_playback_locations[i] = 0;
		audio_stream.current_process_locations[i] = 0;
		
		audio_stream.queue_fronts[i] = NULL;
		audio_stream.queue_backs[i] = NULL;
		
		audio_stream.durations[i] = 0;
	}
}

//deconstructs the stream and frees all memory allocated
void deconstruct_stream(){
	//assumes all queues have been cleared already
	free(audio_stream.current_playback_locations);
	free(audio_stream.current_process_locations);
	free(audio_stream.queue_fronts);
	free(audio_stream.queue_backs);
	free(audio_stream.durations);
}

//processes one chord of the shortest duration track
void populate_stream(){
	unsigned int i = get_next_processed_track();
	
	//retrieve the current track
	struct MusicTrack current_track = audio_stream.current_song->music_tracks[i];
	
	//check to make sure there is more song left for the respective track
	if(audio_stream.current_process_locations[i] >= current_track.length) return;
	
	//retrieve the current chord
	struct MusicChord current_chord = current_track.music_chords[audio_stream.current_process_locations[i]];
	
	//add a new node to the back of the respective queue
	struct MusicWaveNode * node = malloc(sizeof(struct MusicWaveNode));
	
	node->wave = get_chord_wave(current_chord);
	node->next = NULL;
	
	//append the node to the back of the queue
	if(audio_stream.queue_backs[i] != NULL)
		audio_stream.queue_backs[i]->next = node;
	
	audio_stream.queue_backs[i] = node;
	
	//if the front of the list is null, the added node is also the front of the list
	if(audio_stream.queue_fronts[i] == NULL) audio_stream.queue_fronts[i] = node;
	
	//increment the location to be the next chord to be processed
	audio_stream.current_process_locations[i]++;
	
	//increase the duration of the audio stream by the duration of the chord just processed
	audio_stream.durations[i] += current_chord.duration;
}

//clears the stream but keeps the current song the same
void clear_stream(){
	for(unsigned int i = 0; i < audio_stream.current_song->num_tracks; i++){
		//advance the stream to the end
		while(audio_stream.queue_fronts[i] != NULL)
			advance_stream(&audio_stream.queue_fronts[i]);
		
		//set all other variables pertaining to the respective track to zero
		audio_stream.queue_backs[i] = NULL;
		audio_stream.current_playback_locations[i] = 0;
		audio_stream.current_process_locations[i] = 0;
		audio_stream.durations[i] = 0;
	}
}

void advance_stream(struct MusicWaveNode ** front_node){
	//save a copy of the pointer to the next node
	struct MusicWaveNode * next_node = (*front_node)->next;
	
	//free the memory from both the waveform and the node
	free((*front_node)->wave.waveform);
	free(*front_node);
	
	//reattach the rest of the queue to the front
	*front_node = next_node;
}

bool is_stream_valid(){
	for(unsigned int i = 0; i < audio_stream.current_song->num_tracks; i++){
		if(audio_stream.queue_fronts[i] == NULL && !is_track_fully_processed(i)) return false;
	}
	
	return true;
}

bool is_track_fully_processed(unsigned int track_num){
	return audio_stream.current_process_locations[track_num] >= audio_stream.current_song->music_tracks[track_num].length;
}

bool is_stream_fully_processed(){
	for(unsigned int i = 0; i < audio_stream.current_song->num_tracks; i++){
		if(!is_track_fully_processed(i))
			return false;
	}
	
	return true;
}

//finds the next valid track with least processed time
unsigned int get_next_processed_track(){
	unsigned int shortest_duration_index = 0;
	for(unsigned int i = 1; i < audio_stream.current_song->num_tracks; i++){
		if(!is_track_fully_processed(i)
			&& (audio_stream.durations[i] < audio_stream.durations[shortest_duration_index] || is_track_fully_processed(shortest_duration_index))){
			shortest_duration_index = i;
		}
	}
	
	return shortest_duration_index;
}

//finds the track with the least processed time if still processing or most processed time if finished processing and returns the duration of it
double get_time_left(){
	unsigned int track_index = 0;
	if(is_stream_fully_processed()){
		for(unsigned int i = 1; i < audio_stream.current_song->num_tracks; i++){
			if(audio_stream.durations[i] > audio_stream.durations[track_index]){
				track_index = i;
			}
		}
	} else {
		track_index = get_next_processed_track();
	}
	
	return audio_stream.durations[track_index];
}

//retrieve the current sample for all tracks of the provided playback type
double get_sample(char playback_type){
	//store the sample to be returned
	double to_return = 0;
	
	//check each track to see if it is to be placed on the playback type requested
	for(unsigned int i = 0; i < audio_stream.current_song->num_tracks; i++){
		struct MusicTrack current_track = audio_stream.current_song->music_tracks[i];
		
		if(current_track.playback_type == playback_type && audio_stream.queue_fronts[i] != NULL){
			to_return += audio_stream.queue_fronts[i]->wave.waveform[audio_stream.current_playback_locations[i]];
			
			//increment the next sample location
			audio_stream.current_playback_locations[i]++;
			
			//decrement the duration of the track played
			audio_stream.durations[i] -= sampling_period;
			
			//if the current wave has reached the end, advance and reset location
			if(audio_stream.current_playback_locations[i] == audio_stream.queue_fronts[i]->wave.length){
				advance_stream(&audio_stream.queue_fronts[i]);
				audio_stream.current_playback_locations[i] = 0;
			}
		}
	}
	
	return to_return;	
}