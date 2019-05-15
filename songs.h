#ifndef songs
#define songs

#include <limits.h>

const struct MusicSong test_song = { 
			.music_chords = (struct MusicChord[]) {
				{.music_notes = (struct MusicNote[]) {{.note = "A", .octave = 4}}, .duration = 0.5, .intensity = 1, .num_notes = 1},
				{.music_notes = (struct MusicNote[]) {{.note = "S", .octave = 4}}, .duration = 0.5, .intensity = 1, .num_notes = 1},
				{.music_notes = (struct MusicNote[]) {{.note = "B", .octave = 4}}, .duration = 0.5, .intensity = 1, .num_notes = 1}
			}, .length = 3};

#endif