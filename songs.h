#ifndef songs
#define songs

#include <limits.h>

const struct MusicSong song_list[2] = {
				//Test Song
				{.music_tracks = (struct MusicTrack[]) {
					{.music_chords = (struct MusicChord[]) {
						{.music_notes = (struct MusicNote[]) {
															{.note = "A", .octave = 4, .duration = 0.5, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}, 
															{.note = "Cs", .octave = 4, .duration = 0.5, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}, 
															{.note = "E", .octave = 4, .duration = 0.5, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
															}, .duration = 0.5, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
															{.note = "S", .octave = 4, .duration = 0.5, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
															}, .duration = 0.5, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "B", .octave = 4, .duration = 0.5, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															{.note = "Ds", .octave = 4, .duration = 0.5, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															{.note = "Fs", .octave = 4, .duration = 0.5, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.5, .num_notes = 3},
					}, .playback_type = PLAYBACK_MONO, .length = 3}
				}, .num_tracks = 1},
				
				//Simple Happy Birthday
				{.music_tracks = (struct MusicTrack[]) {
					{.music_chords = (struct MusicChord[]) {
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4, .duration = 0.5625, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
															}, .duration = 0.5625, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4, .duration = 0.1875, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
															}, .duration = 0.1875, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "A", .octave = 4, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "C", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "B", .octave = 4, .duration = 1.5, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 1.5, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4, .duration = 0.5625, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.5625, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4, .duration = 0.1875, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.1875, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "A", .octave = 4, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "D", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "C", .octave = 5, .duration = 1.5, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 1.5, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4, .duration = 0.5625, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.5625, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 4, .duration = 0.1875, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.1875, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "G", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "E", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "C", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "B", .octave = 4, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "A", .octave = 4, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "F", .octave = 5, .duration = 0.5625, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.5625, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "F", .octave = 5, .duration = 0.1875, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.1875, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "E", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "C", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "D", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
															{.note = "C", .octave = 5, .duration = 1.5, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}},
															}, .duration = 1.5, .num_notes = 1}
					}, .playback_type = PLAYBACK_MONO, .length = 25}
				}, .num_tracks = 1}
			};

#endif