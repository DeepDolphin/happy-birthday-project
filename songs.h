#ifndef songs
#define songs

#include <limits.h>

const struct MusicSong test_song = { 
			.music_notes = (struct MusicNote[]) {
				{.note = "A", .octave = 4, .duration = 0.5, .intensity = 1},
				{.note = "S", .octave = 4, .duration = 0.5, .intensity = 1},
				{.note = "B", .octave = 4, .duration = 0.5, .intensity = 1}
			}, .length = 3};

#endif