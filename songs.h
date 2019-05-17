#ifndef songs
#define songs

#include <limits.h>

const struct MusicSong song_list[2] = {
				//Test Song
				{.music_tracks = (struct MusicTrack[]) {
					{.music_chords = (struct MusicChord[]) {
						{.music_notes = (struct MusicNote[]) {
															{.note = "A", .octave = 4}, 
															{.note = "Cs", .octave = 4}, 
															{.note = "E", .octave = 4}
															}, .duration = 0.5, .intensity = 1, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
															{.note = "S", .octave = 4}
															}, .duration = 0.5, .intensity = 0, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "B", .octave = 4},
															{.note = "Ds", .octave = 4},
															{.note = "Fs", .octave = 4},
															}, .duration = 0.5, .intensity = 1, .num_notes = 3}
					}, .playback_type = PLAYBACK_MONO, .length = 3}
				}, .num_tracks = 1},
				
				//Simple Happy Birthday
				{.music_tracks = (struct MusicTrack[]) {
					{.music_chords = (struct MusicChord[]) {
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4}
															}, .duration = 0.5625, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4}
															}, .duration = 0.1875, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "A", .octave = 4},
															}, .duration = 0.75, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4},
															}, .duration = 0.75, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "C", .octave = 5},
															}, .duration = 0.75, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "B", .octave = 4},
															}, .duration = 1.5, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4},
															}, .duration = 0.5625, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4},
															}, .duration = 0.1875, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "A", .octave = 4},
															}, .duration = 0.75, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4},
															}, .duration = 0.75, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "D", .octave = 5},
															}, .duration = 0.75, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "C", .octave = 5},
															}, .duration = 1.5, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4},
															}, .duration = 0.5625, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4},
															}, .duration = 0.1875, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 5},
															}, .duration = 0.75, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "E", .octave = 5},
															}, .duration = 0.75, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "C", .octave = 5},
															}, .duration = 0.75, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "B", .octave = 4},
															}, .duration = 0.75, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "A", .octave = 4},
															}, .duration = 0.75, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "F", .octave = 5},
															}, .duration = 0.5625, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "F", .octave = 5},
															}, .duration = 0.1875, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "E", .octave = 5},
															}, .duration = 0.75, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "C", .octave = 5},
															}, .duration = 0.75, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "D", .octave = 5},
															}, .duration = 0.75, .intensity = 1, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "C", .octave = 5},
															}, .duration = 1.5, .intensity = 1, .num_notes = 1}
					}, .playback_type = PLAYBACK_MONO, .length = 25}
				}, .num_tracks = 1}
			};

#endif