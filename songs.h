#ifndef songs
#define songs

#include <limits.h>

const struct MusicSong test_song = { 
			.music_chords = (struct MusicChord[]) {
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
			}, .length = 3};

#endif