#ifndef songs
#define songs

#include <limits.h>

const struct MusicSong song_list[3] = {
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
							{.note = "Fs", .octave = 4, .duration = 0.5, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.5, .num_notes = 3}
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
							{.note = "A", .octave = 4, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 4, .duration = 1.5, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 1.5, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.5625, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.5625, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.1875, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.1875, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 1.5, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 1.5, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.5625, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.5625, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.1875, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.1875, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 4, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.5625, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.5625, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.1875, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.1875, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.75, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 0.75, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 1.5, .peak_intensity = 1, .sustain_intensity = 0.4, .adsr_envelope = (double[]) {0.1, 0.4, 0.4, 0.1}}
						}, .duration = 1.5, .num_notes = 1}
					}, .playback_type = PLAYBACK_MONO, .length = 25}
				}, .num_tracks = 1},
				
				//Portal - Still Alive
				{.music_tracks = (struct MusicTrack[]) {
					{.music_chords = (struct MusicChord[]) {
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 1.01026, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 1.01026, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.233888, .peak_intensity = 3.21973564503615, .sustain_intensity = 1.28789425801446, .adsr_envelope = (double[]) {-0.0516535433070866, -0.206614173228346, 1.20826771653543, 0.05}}
						}, .duration = 0.233888, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.015137, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.015137, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231447, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}}
						}, .duration = 0.231447, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.015136, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.015136, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.246096, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.246096, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.232423, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}}
						}, .duration = 0.232423, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.01709, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.01709, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.51221, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}}
						}, .duration = 0.51221, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234376, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234376, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279299, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234376, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234376, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.233888, .peak_intensity = 3.21973564503615, .sustain_intensity = 1.28789425801446, .adsr_envelope = (double[]) {-0.0516535433070866, -0.206614173228346, 1.20826771653543, 0.05}},
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.246096, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279299, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234376, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234376, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.49512, .peak_intensity = 3.21973564503615, .sustain_intensity = 1.28789425801446, .adsr_envelope = (double[]) {-0.0516535433070866, -0.206614173228346, 1.20826771653543, 0.05}}
						}, .duration = 0.49512, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.231447, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279299, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234376, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234376, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.51221, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}}
						}, .duration = 0.51221, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231446, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234376, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234376, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.231447, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279299, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234376, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234376, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.49512, .peak_intensity = 3.21973564503615, .sustain_intensity = 1.28789425801446, .adsr_envelope = (double[]) {-0.0516535433070866, -0.206614173228346, 1.20826771653543, 0.05}}
						}, .duration = 0.49512, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.246096, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279299, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234376, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234376, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279299, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234376, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234376, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.233888, .peak_intensity = 3.21973564503615, .sustain_intensity = 1.28789425801446, .adsr_envelope = (double[]) {-0.0516535433070866, -0.206614173228346, 1.20826771653543, 0.05}},
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.246096, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.51221, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}}
						}, .duration = 0.51221, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234376, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234376, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279299, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234376, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234376, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.233888, .peak_intensity = 3.21973564503615, .sustain_intensity = 1.28789425801446, .adsr_envelope = (double[]) {-0.0516535433070866, -0.206614173228346, 1.20826771653543, 0.05}},
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.246096, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279299, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231446, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234376, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234376, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.231447, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279299, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234376, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234376, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.51221, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}}
						}, .duration = 0.51221, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231446, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234376, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234376, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.231447, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279299, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231446, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234376, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234376, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231447, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.249513, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279299, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231446, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "F", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729984, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729984, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.231447, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.231447, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.015137, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.015137, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "As", .octave = 4, .duration = 0.232423, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}}
						}, .duration = 0.232423, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.01709, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.01709, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}},
							{.note = "C", .octave = 5, .duration = 0.51221, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}}
						}, .duration = 0.51221, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}},
							{.note = "F", .octave = 5, .duration = 0.49512, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.49512, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.233888, .peak_intensity = 3.21973564503615, .sustain_intensity = 1.28789425801446, .adsr_envelope = (double[]) {-0.0516535433070866, -0.206614173228346, 1.20826771653543, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231447, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "F", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.249513, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.279299, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279299, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}},
							{.note = "C", .octave = 5, .duration = 0.49512, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.49512, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 3, .duration = 0.265089, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}},
							{.note = "C", .octave = 5, .duration = 0.500149, .peak_intensity = 3.21973564503615, .sustain_intensity = 1.28789425801446, .adsr_envelope = (double[]) {-0.0516535433070866, -0.206614173228346, 1.20826771653543, 0.05}}
						}, .duration = 0.500149, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000501, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000501, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.237939, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "F", .octave = 4, .duration = 0.268704, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.268704, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.243586, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.243586, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 3, .duration = 0.284105, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}},
							{.note = "C", .octave = 5, .duration = 0.517017, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}}
						}, .duration = 0.517017, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}},
							{.note = "F", .octave = 5, .duration = 0.49512, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.49512, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.233888, .peak_intensity = 3.21973564503615, .sustain_intensity = 1.28789425801446, .adsr_envelope = (double[]) {-0.0516535433070866, -0.206614173228346, 1.20826771653543, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.231447, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "F", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.249513, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279298, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}},
							{.note = "F", .octave = 5, .duration = 0.49512, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.49512, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}},
							{.note = "F", .octave = 5, .duration = 0.49512, .peak_intensity = 3.21973564503615, .sustain_intensity = 1.28789425801446, .adsr_envelope = (double[]) {-0.0516535433070866, -0.206614173228346, 1.20826771653543, 0.05}}
						}, .duration = 0.49512, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.231447, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "F", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "As", .octave = 5, .duration = 0.264162, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.279298, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279298, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}},
							{.note = "A", .octave = 5, .duration = 0.49512, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.49512, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "As", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}},
							{.note = "G", .octave = 5, .duration = 0.49512, .peak_intensity = 3.21973564503615, .sustain_intensity = 1.28789425801446, .adsr_envelope = (double[]) {-0.0516535433070866, -0.206614173228346, 1.20826771653543, 0.05}}
						}, .duration = 0.49512, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.231447, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "A", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.264162, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279298, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}},
							{.note = "G", .octave = 5, .duration = 0.49512, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.49512, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}},
							{.note = "F", .octave = 5, .duration = 0.49512, .peak_intensity = 3.21973564503615, .sustain_intensity = 1.28789425801446, .adsr_envelope = (double[]) {-0.0516535433070866, -0.206614173228346, 1.20826771653543, 0.05}}
						}, .duration = 0.49512, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231447, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "F", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.249513, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 2.68963921762177, .sustain_intensity = 1.07585568704871, .adsr_envelope = (double[]) {-0.0406299212598425, -0.16251968503937, 1.15314960629921, 0.05}}
						}, .duration = 0.279298, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.231447, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "F", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.263673, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.246095, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "E", .octave = 4, .duration = 0.261232, .peak_intensity = 2.50290031972907, .sustain_intensity = 1.00116012789163, .adsr_envelope = (double[]) {-0.0362204724409449, -0.14488188976378, 1.13110236220472, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 3, .duration = 0.758794, .peak_intensity = 3.65181313616047, .sustain_intensity = 1.46072525446419, .adsr_envelope = (double[]) {-0.0593700787401575, -0.23748031496063, 1.24685039370079, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.758794, .peak_intensity = 4.37154278777346, .sustain_intensity = 1.74861711510938, .adsr_envelope = (double[]) {-0.0703937007874016, -0.281574803149606, 1.30196850393701, 0.05}}
						}, .duration = 0.758794, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 3, .duration = 0.233888, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.248536, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 2, .duration = 0.232423, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.247071, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 3, .duration = 0.233888, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.248536, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 2, .duration = 0.232423, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.247071, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 3, .duration = 0.233888, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.248536, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 2, .duration = 0.232423, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.247071, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 3, .duration = 0.233888, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.248536, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "A", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 2, .duration = 0.232423, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.247071, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.528811, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.528811, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.233888, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}},
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.51221, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "E", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "Cs", .octave = 5, .duration = 0.51221, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "E", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 4, .duration = 0.233888, .peak_intensity = 3.52276204985456, .sustain_intensity = 1.40910481994183, .adsr_envelope = (double[]) {-0.0571653543307087, -0.228661417322835, 1.23582677165354, 0.05}},
							{.note = "G", .octave = 5, .duration = 0.248536, .peak_intensity = 4.53168767908628, .sustain_intensity = 1.81267507163451, .adsr_envelope = (double[]) {-0.0725984251968504, -0.290393700787402, 1.31299212598425, 0.05}},
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "A", .octave = 4, .duration = 0.51221, .peak_intensity = 3.65181313616047, .sustain_intensity = 1.46072525446419, .adsr_envelope = (double[]) {-0.0593700787401575, -0.23748031496063, 1.24685039370079, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.51221, .peak_intensity = 4.69769923749095, .sustain_intensity = 1.87907969499638, .adsr_envelope = (double[]) {-0.0748031496062992, -0.299212598425197, 1.3240157480315, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 4, .duration = 0.233888, .peak_intensity = 3.52276204985456, .sustain_intensity = 1.40910481994183, .adsr_envelope = (double[]) {-0.0571653543307087, -0.228661417322835, 1.23582677165354, 0.05}},
							{.note = "G", .octave = 5, .duration = 0.248536, .peak_intensity = 4.53168767908628, .sustain_intensity = 1.81267507163451, .adsr_envelope = (double[]) {-0.0725984251968504, -0.290393700787402, 1.31299212598425, 0.05}},
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.51221, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "E", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "Cs", .octave = 5, .duration = 0.51221, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "E", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.249513, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.51221, .peak_intensity = 3.65181313616047, .sustain_intensity = 1.46072525446419, .adsr_envelope = (double[]) {-0.0593700787401575, -0.23748031496063, 1.24685039370079, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.51221, .peak_intensity = 3.65181313616047, .sustain_intensity = 1.46072525446419, .adsr_envelope = (double[]) {-0.0593700787401575, -0.23748031496063, 1.24685039370079, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.51221, .peak_intensity = 4.37154278777346, .sustain_intensity = 1.74861711510938, .adsr_envelope = (double[]) {-0.0703937007874016, -0.281574803149606, 1.30196850393701, 0.05}}
						}, .duration = 0.51221, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231447, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.49512, .peak_intensity = 3.65181313616047, .sustain_intensity = 1.46072525446419, .adsr_envelope = (double[]) {-0.0593700787401575, -0.23748031496063, 1.24685039370079, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.49512, .peak_intensity = 3.65181313616047, .sustain_intensity = 1.46072525446419, .adsr_envelope = (double[]) {-0.0593700787401575, -0.23748031496063, 1.24685039370079, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.49512, .peak_intensity = 4.37154278777346, .sustain_intensity = 1.74861711510938, .adsr_envelope = (double[]) {-0.0703937007874016, -0.281574803149606, 1.30196850393701, 0.05}}
						}, .duration = 0.49512, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 3, .duration = 0.248536, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.248536, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.248536, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.248536, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 3, .duration = 0.246095, .peak_intensity = 3.52276204985456, .sustain_intensity = 1.40910481994183, .adsr_envelope = (double[]) {-0.0571653543307087, -0.228661417322835, 1.23582677165354, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.246095, .peak_intensity = 3.52276204985456, .sustain_intensity = 1.40910481994183, .adsr_envelope = (double[]) {-0.0571653543307087, -0.228661417322835, 1.23582677165354, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.246095, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 0.246095, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.231447, .peak_intensity = 4.53168767908628, .sustain_intensity = 1.81267507163451, .adsr_envelope = (double[]) {-0.0725984251968504, -0.290393700787402, 1.31299212598425, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.246095, .peak_intensity = 3.78559181480473, .sustain_intensity = 1.51423672592189, .adsr_envelope = (double[]) {-0.0615748031496063, -0.246299212598425, 1.25787401574803, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.246095, .peak_intensity = 3.78559181480473, .sustain_intensity = 1.51423672592189, .adsr_envelope = (double[]) {-0.0615748031496063, -0.246299212598425, 1.25787401574803, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.246095, .peak_intensity = 4.53168767908628, .sustain_intensity = 1.81267507163451, .adsr_envelope = (double[]) {-0.0725984251968504, -0.290393700787402, 1.31299212598425, 0.05}}
						}, .duration = 0.246095, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "As", .octave = 4, .duration = 0.232423, .peak_intensity = 4.69769923749095, .sustain_intensity = 1.87907969499638, .adsr_envelope = (double[]) {-0.0748031496062992, -0.299212598425197, 1.3240157480315, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.247071, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.262208, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.262208, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.262208, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.500003, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.500003, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.49512, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.49512, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.233888, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.741703, .peak_intensity = 5.72563968103523, .sustain_intensity = 2.29025587241409, .adsr_envelope = (double[]) {-0.0869291338582677, -0.347716535433071, 1.38464566929134, 0.05}}
						}, .duration = 0.741703, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.232423, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.232423, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.232423, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.247071, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}}
						}, .duration = 0.247071, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.249513, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.758794, .peak_intensity = 5.9353898742577, .sustain_intensity = 2.37415594970308, .adsr_envelope = (double[]) {-0.0891338582677166, -0.356535433070866, 1.39566929133858, 0.05}}
						}, .duration = 0.758794, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 3, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.248536, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}}
						}, .duration = 0.248536, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.49512, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}},
							{.note = "A", .octave = 2, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.741703, .peak_intensity = 5.72563968103523, .sustain_intensity = 2.29025587241409, .adsr_envelope = (double[]) {-0.0869291338582677, -0.347716535433071, 1.38464566929134, 0.05}}
						}, .duration = 0.741703, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "As", .octave = 4, .duration = 0.232423, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "A", .octave = 2, .duration = 0.247071, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.247071, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.247071, .peak_intensity = 5.04818989479983, .sustain_intensity = 2.01927595791993, .adsr_envelope = (double[]) {-0.0792125984251969, -0.316850393700787, 1.34606299212598, 0.05}}
						}, .duration = 0.247071, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.51221, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "A", .octave = 2, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.758794, .peak_intensity = 5.52330183047076, .sustain_intensity = 2.20932073218831, .adsr_envelope = (double[]) {-0.0847244094488189, -0.338897637795276, 1.37362204724409, 0.05}}
						}, .duration = 0.758794, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 2, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.248536, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}}
						}, .duration = 0.248536, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.233888, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.741703, .peak_intensity = 5.72563968103523, .sustain_intensity = 2.29025587241409, .adsr_envelope = (double[]) {-0.0869291338582677, -0.347716535433071, 1.38464566929134, 0.05}}
						}, .duration = 0.741703, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 3, .duration = 0.232423, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.232423, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.247071, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.247071, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}}
						}, .duration = 0.247071, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.249513, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.758794, .peak_intensity = 5.9353898742577, .sustain_intensity = 2.37415594970308, .adsr_envelope = (double[]) {-0.0891338582677166, -0.356535433070866, 1.39566929133858, 0.05}}
						}, .duration = 0.758794, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 3, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.248536, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}}
						}, .duration = 0.248536, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.49512, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}},
							{.note = "A", .octave = 2, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.741703, .peak_intensity = 5.72563968103523, .sustain_intensity = 2.29025587241409, .adsr_envelope = (double[]) {-0.0869291338582677, -0.347716535433071, 1.38464566929134, 0.05}}
						}, .duration = 0.741703, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232423, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "A", .octave = 2, .duration = 0.232423, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.232423, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.247071, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}}
						}, .duration = 0.247071, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "As", .octave = 5, .duration = 0.264162, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "F", .octave = 3, .duration = 1.007818, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "As", .octave = 3, .duration = 1.007818, .peak_intensity = 5.9353898742577, .sustain_intensity = 2.37415594970308, .adsr_envelope = (double[]) {-0.0891338582677166, -0.356535433070866, 1.39566929133858, 0.05}}
						}, .duration = 1.007818, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.49512, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.49512, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.49512, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.49512, .peak_intensity = 5.72563968103523, .sustain_intensity = 2.29025587241409, .adsr_envelope = (double[]) {-0.0869291338582677, -0.347716535433071, 1.38464566929134, 0.05}}
						}, .duration = 0.49512, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.493655, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.493655, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.493655, .peak_intensity = 5.52330183047076, .sustain_intensity = 2.20932073218831, .adsr_envelope = (double[]) {-0.0847244094488189, -0.338897637795276, 1.37362204724409, 0.05}}
						}, .duration = 0.493655, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.264162, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.51221, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.51221, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "F", .octave = 4, .duration = 0.51221, .peak_intensity = 5.9353898742577, .sustain_intensity = 2.37415594970308, .adsr_envelope = (double[]) {-0.0891338582677166, -0.356535433070866, 1.39566929133858, 0.05}}
						}, .duration = 0.51221, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.49512, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.49512, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "E", .octave = 4, .duration = 0.49512, .peak_intensity = 5.52330183047076, .sustain_intensity = 2.20932073218831, .adsr_envelope = (double[]) {-0.0847244094488189, -0.338897637795276, 1.37362204724409, 0.05}}
						}, .duration = 0.49512, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.49512, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.49512, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.49512, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.49512, .peak_intensity = 5.72563968103523, .sustain_intensity = 2.29025587241409, .adsr_envelope = (double[]) {-0.0869291338582677, -0.347716535433071, 1.38464566929134, 0.05}}
						}, .duration = 0.49512, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.493655, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.493655, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.493655, .peak_intensity = 5.52330183047076, .sustain_intensity = 2.20932073218831, .adsr_envelope = (double[]) {-0.0847244094488189, -0.338897637795276, 1.37362204724409, 0.05}}
						}, .duration = 0.493655, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.249513, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.51221, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.51221, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.51221, .peak_intensity = 5.9353898742577, .sustain_intensity = 2.37415594970308, .adsr_envelope = (double[]) {-0.0891338582677166, -0.356535433070866, 1.39566929133858, 0.05}}
						}, .duration = 0.51221, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.49512, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.49512, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.49512, .peak_intensity = 5.52330183047076, .sustain_intensity = 2.20932073218831, .adsr_envelope = (double[]) {-0.0847244094488189, -0.338897637795276, 1.37362204724409, 0.05}}
						}, .duration = 0.49512, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 3, .duration = 0.49512, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.49512, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.49512, .peak_intensity = 5.72563968103523, .sustain_intensity = 2.29025587241409, .adsr_envelope = (double[]) {-0.0869291338582677, -0.347716535433071, 1.38464566929134, 0.05}}
						}, .duration = 0.49512, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.246095, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.493655, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.493655, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.493655, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}}
						}, .duration = 0.493655, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}}
						}, .duration = 0.279298, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.264437, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}}
						}, .duration = 0.264437, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234014, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234014, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.264668, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.264668, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.239422, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.239422, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}}
						}, .duration = 0.279298, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.264437, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "G", .octave = 5, .duration = 0.310742, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.310742, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.020197, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.020197, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.315386, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}}
						}, .duration = 0.315386, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.020277, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.020277, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.313537, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}}
						}, .duration = 0.313537, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.022402, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.022402, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "A", .octave = 4, .duration = 2.008396, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}}
						}, .duration = 2.008396, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002452, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002452, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.279298, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 2.64168730957831, .sustain_intensity = 1.05667492383132, .adsr_envelope = (double[]) {-0.0395275590551181, -0.158110236220472, 1.14763779527559, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.234414, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "B", .octave = 3, .duration = 0.264437, .peak_intensity = 2.20676060765721, .sustain_intensity = 0.882704243062886, .adsr_envelope = (double[]) {-0.028503937007874, -0.114015748031496, 1.09251968503937, 0.05}}
						}, .duration = 0.264437, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234014, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234014, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.249268, .peak_intensity = 2.73846154870004, .sustain_intensity = 1.09538461948002, .adsr_envelope = (double[]) {-0.0417322834645669, -0.166929133858268, 1.15866141732283, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.264668, .peak_intensity = 1.84344012323131, .sustain_intensity = 0.737376049292526, .adsr_envelope = (double[]) {-0.0174803149606299, -0.0699212598425197, 1.03740157480315, 0.05}}
						}, .duration = 0.264668, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.239422, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.239422, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 2.12877609886204, .sustain_intensity = 0.851510439544816, .adsr_envelope = (double[]) {-0.0262992125984252, -0.105196850393701, 1.08149606299213, 0.05}}
						}, .duration = 0.279298, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.264437, .peak_intensity = 2.05354747740277, .sustain_intensity = 0.82141899096111, .adsr_envelope = (double[]) {-0.0240944881889764, -0.0963779527559055, 1.07047244094488, 0.05}}
						}, .duration = 0.264437, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234014, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234014, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.264668, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}}
						}, .duration = 0.264668, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.239422, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.239422, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 2.12877609886204, .sustain_intensity = 0.851510439544816, .adsr_envelope = (double[]) {-0.0262992125984252, -0.105196850393701, 1.08149606299213, 0.05}}
						}, .duration = 0.279298, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.234414, .peak_intensity = 2.54833296633279, .sustain_intensity = 1.01933318653312, .adsr_envelope = (double[]) {-0.0373228346456693, -0.149291338582677, 1.13661417322835, 0.05}},
							{.note = "B", .octave = 3, .duration = 0.264437, .peak_intensity = 2.05354747740277, .sustain_intensity = 0.82141899096111, .adsr_envelope = (double[]) {-0.0240944881889764, -0.0963779527559055, 1.07047244094488, 0.05}}
						}, .duration = 0.264437, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234014, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234014, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.249268, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.264668, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}}
						}, .duration = 0.264668, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.239422, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.239422, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 2.12877609886204, .sustain_intensity = 0.851510439544816, .adsr_envelope = (double[]) {-0.0262992125984252, -0.105196850393701, 1.08149606299213, 0.05}}
						}, .duration = 0.279298, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231447, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.264437, .peak_intensity = 2.05354747740277, .sustain_intensity = 0.82141899096111, .adsr_envelope = (double[]) {-0.0240944881889764, -0.0963779527559055, 1.07047244094488, 0.05}}
						}, .duration = 0.264437, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234014, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234014, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.234422, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.264668, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}}
						}, .duration = 0.264668, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.239422, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.239422, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 2.12877609886204, .sustain_intensity = 0.851510439544816, .adsr_envelope = (double[]) {-0.0262992125984252, -0.105196850393701, 1.08149606299213, 0.05}}
						}, .duration = 0.279298, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 2.05354747740277, .sustain_intensity = 0.82141899096111, .adsr_envelope = (double[]) {-0.0240944881889764, -0.0963779527559055, 1.07047244094488, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.279298, .peak_intensity = 2.12877609886204, .sustain_intensity = 0.851510439544816, .adsr_envelope = (double[]) {-0.0262992125984252, -0.105196850393701, 1.08149606299213, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.51221, .peak_intensity = 2.64168730957831, .sustain_intensity = 1.05667492383132, .adsr_envelope = (double[]) {-0.0395275590551181, -0.158110236220472, 1.14763779527559, 0.05}}
						}, .duration = 0.51221, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231447, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.264437, .peak_intensity = 2.05354747740277, .sustain_intensity = 0.82141899096111, .adsr_envelope = (double[]) {-0.0240944881889764, -0.0963779527559055, 1.07047244094488, 0.05}}
						}, .duration = 0.264437, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234014, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234014, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.264668, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.501638, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.501638, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002452, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002452, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 2.12877609886204, .sustain_intensity = 0.851510439544816, .adsr_envelope = (double[]) {-0.0262992125984252, -0.105196850393701, 1.08149606299213, 0.05}},
							{.note = "Cs", .octave = 5, .duration = 0.51221, .peak_intensity = 2.64168730957831, .sustain_intensity = 1.05667492383132, .adsr_envelope = (double[]) {-0.0395275590551181, -0.158110236220472, 1.14763779527559, 0.05}}
						}, .duration = 0.51221, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231447, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.264437, .peak_intensity = 2.05354747740277, .sustain_intensity = 0.82141899096111, .adsr_envelope = (double[]) {-0.0240944881889764, -0.0963779527559055, 1.07047244094488, 0.05}}
						}, .duration = 0.264437, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234014, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234014, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.249268, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.264668, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}}
						}, .duration = 0.264668, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.239422, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.239422, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 2.12877609886204, .sustain_intensity = 0.851510439544816, .adsr_envelope = (double[]) {-0.0262992125984252, -0.105196850393701, 1.08149606299213, 0.05}}
						}, .duration = 0.279298, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.264437, .peak_intensity = 2.05354747740277, .sustain_intensity = 0.82141899096111, .adsr_envelope = (double[]) {-0.0240944881889764, -0.0963779527559055, 1.07047244094488, 0.05}}
						}, .duration = 0.264437, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234014, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234014, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.264668, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}}
						}, .duration = 0.264668, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.239422, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.239422, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 2.12877609886204, .sustain_intensity = 0.851510439544816, .adsr_envelope = (double[]) {-0.0262992125984252, -0.105196850393701, 1.08149606299213, 0.05}}
						}, .duration = 0.279298, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 1.98097735323201, .sustain_intensity = 0.792390941292806, .adsr_envelope = (double[]) {-0.0218897637795276, -0.0875590551181103, 1.05944881889764, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 4, .duration = 0.233888, .peak_intensity = 3.52276204985456, .sustain_intensity = 1.40910481994183, .adsr_envelope = (double[]) {-0.0571653543307087, -0.228661417322835, 1.23582677165354, 0.05}},
							{.note = "G", .octave = 5, .duration = 0.248536, .peak_intensity = 4.53168767908628, .sustain_intensity = 1.81267507163451, .adsr_envelope = (double[]) {-0.0725984251968504, -0.290393700787402, 1.31299212598425, 0.05}},
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}}
						}, .duration = 0.263673, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.246095, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.246095, .peak_intensity = 4.37154278777346, .sustain_intensity = 1.74861711510938, .adsr_envelope = (double[]) {-0.0703937007874016, -0.281574803149606, 1.30196850393701, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234865, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234865, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 4, .duration = 0.233888, .peak_intensity = 3.52276204985456, .sustain_intensity = 1.40910481994183, .adsr_envelope = (double[]) {-0.0571653543307087, -0.228661417322835, 1.23582677165354, 0.05}},
							{.note = "G", .octave = 5, .duration = 0.248536, .peak_intensity = 4.53168767908628, .sustain_intensity = 1.81267507163451, .adsr_envelope = (double[]) {-0.0725984251968504, -0.290393700787402, 1.31299212598425, 0.05}},
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.51221, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "E", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "Cs", .octave = 5, .duration = 0.51221, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "E", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.989263, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.249513, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.51221, .peak_intensity = 3.65181313616047, .sustain_intensity = 1.46072525446419, .adsr_envelope = (double[]) {-0.0593700787401575, -0.23748031496063, 1.24685039370079, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.51221, .peak_intensity = 3.65181313616047, .sustain_intensity = 1.46072525446419, .adsr_envelope = (double[]) {-0.0593700787401575, -0.23748031496063, 1.24685039370079, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.51221, .peak_intensity = 4.37154278777346, .sustain_intensity = 1.74861711510938, .adsr_envelope = (double[]) {-0.0703937007874016, -0.281574803149606, 1.30196850393701, 0.05}}
						}, .duration = 0.51221, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231447, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.49512, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.49512, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.49512, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}}
						}, .duration = 0.49512, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 3, .duration = 0.248536, .peak_intensity = 3.71810084820805, .sustain_intensity = 1.48724033928322, .adsr_envelope = (double[]) {-0.0604724409448819, -0.241889763779528, 1.25236220472441, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.248536, .peak_intensity = 3.71810084820805, .sustain_intensity = 1.48724033928322, .adsr_envelope = (double[]) {-0.0604724409448819, -0.241889763779528, 1.25236220472441, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.248536, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}}
						}, .duration = 0.248536, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 3, .duration = 0.246095, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.246095, .peak_intensity = 4.06803104652163, .sustain_intensity = 1.62721241860865, .adsr_envelope = (double[]) {-0.065984251968504, -0.263937007874016, 1.27992125984252, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.246095, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.246095, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.231447, .peak_intensity = 4.53168767908628, .sustain_intensity = 1.81267507163451, .adsr_envelope = (double[]) {-0.0725984251968504, -0.290393700787402, 1.31299212598425, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.246095, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.246095, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.246095, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}}
						}, .duration = 0.246095, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "As", .octave = 4, .duration = 0.232423, .peak_intensity = 4.69769923749095, .sustain_intensity = 1.87907969499638, .adsr_envelope = (double[]) {-0.0748031496062992, -0.299212598425197, 1.3240157480315, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.247071, .peak_intensity = 6.37822339621049, .sustain_intensity = 2.55128935848419, .adsr_envelope = (double[]) {-0.0935433070866142, -0.374173228346457, 1.41771653543307, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.262208, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.262208, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.262208, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.500003, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.500003, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.49512, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.49512, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.233888, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.741703, .peak_intensity = 5.72563968103523, .sustain_intensity = 2.29025587241409, .adsr_envelope = (double[]) {-0.0869291338582677, -0.347716535433071, 1.38464566929134, 0.05}}
						}, .duration = 0.741703, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.232423, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.232423, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.232423, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.247071, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}}
						}, .duration = 0.247071, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.249513, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.758794, .peak_intensity = 5.9353898742577, .sustain_intensity = 2.37415594970308, .adsr_envelope = (double[]) {-0.0891338582677166, -0.356535433070866, 1.39566929133858, 0.05}}
						}, .duration = 0.758794, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 3, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.248536, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}}
						}, .duration = 0.248536, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.49512, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}},
							{.note = "A", .octave = 2, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.741703, .peak_intensity = 5.72563968103523, .sustain_intensity = 2.29025587241409, .adsr_envelope = (double[]) {-0.0869291338582677, -0.347716535433071, 1.38464566929134, 0.05}}
						}, .duration = 0.741703, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "As", .octave = 4, .duration = 0.232423, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "A", .octave = 2, .duration = 0.247071, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.247071, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.247071, .peak_intensity = 5.04818989479983, .sustain_intensity = 2.01927595791993, .adsr_envelope = (double[]) {-0.0792125984251969, -0.316850393700787, 1.34606299212598, 0.05}}
						}, .duration = 0.247071, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.51221, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "A", .octave = 2, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.758794, .peak_intensity = 5.52330183047076, .sustain_intensity = 2.20932073218831, .adsr_envelope = (double[]) {-0.0847244094488189, -0.338897637795276, 1.37362204724409, 0.05}}
						}, .duration = 0.758794, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 2, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.248536, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}}
						}, .duration = 0.248536, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.233888, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.741703, .peak_intensity = 5.72563968103523, .sustain_intensity = 2.29025587241409, .adsr_envelope = (double[]) {-0.0869291338582677, -0.347716535433071, 1.38464566929134, 0.05}}
						}, .duration = 0.741703, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 3, .duration = 0.232423, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.232423, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.247071, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.247071, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}}
						}, .duration = 0.247071, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.249513, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.758794, .peak_intensity = 5.9353898742577, .sustain_intensity = 2.37415594970308, .adsr_envelope = (double[]) {-0.0891338582677166, -0.356535433070866, 1.39566929133858, 0.05}}
						}, .duration = 0.758794, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 3, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.248536, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}}
						}, .duration = 0.248536, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.49512, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}},
							{.note = "A", .octave = 2, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.741703, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.741703, .peak_intensity = 5.72563968103523, .sustain_intensity = 2.29025587241409, .adsr_envelope = (double[]) {-0.0869291338582677, -0.347716535433071, 1.38464566929134, 0.05}}
						}, .duration = 0.741703, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232423, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "A", .octave = 2, .duration = 0.232423, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.232423, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.247071, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}}
						}, .duration = 0.247071, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "As", .octave = 5, .duration = 0.264162, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "F", .octave = 3, .duration = 1.007818, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "As", .octave = 3, .duration = 1.007818, .peak_intensity = 5.9353898742577, .sustain_intensity = 2.37415594970308, .adsr_envelope = (double[]) {-0.0891338582677166, -0.356535433070866, 1.39566929133858, 0.05}}
						}, .duration = 1.007818, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.49512, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.49512, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.49512, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.49512, .peak_intensity = 5.72563968103523, .sustain_intensity = 2.29025587241409, .adsr_envelope = (double[]) {-0.0869291338582677, -0.347716535433071, 1.38464566929134, 0.05}}
						}, .duration = 0.49512, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.493655, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.493655, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.493655, .peak_intensity = 5.52330183047076, .sustain_intensity = 2.20932073218831, .adsr_envelope = (double[]) {-0.0847244094488189, -0.338897637795276, 1.37362204724409, 0.05}}
						}, .duration = 0.493655, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.264162, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.51221, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.51221, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "F", .octave = 4, .duration = 0.51221, .peak_intensity = 5.9353898742577, .sustain_intensity = 2.37415594970308, .adsr_envelope = (double[]) {-0.0891338582677166, -0.356535433070866, 1.39566929133858, 0.05}}
						}, .duration = 0.51221, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.246096, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.49512, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.49512, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "E", .octave = 4, .duration = 0.49512, .peak_intensity = 5.52330183047076, .sustain_intensity = 2.20932073218831, .adsr_envelope = (double[]) {-0.0847244094488189, -0.338897637795276, 1.37362204724409, 0.05}}
						}, .duration = 0.49512, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.49512, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.49512, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.49512, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.49512, .peak_intensity = 5.72563968103523, .sustain_intensity = 2.29025587241409, .adsr_envelope = (double[]) {-0.0869291338582677, -0.347716535433071, 1.38464566929134, 0.05}}
						}, .duration = 0.49512, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.493655, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.493655, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.493655, .peak_intensity = 5.52330183047076, .sustain_intensity = 2.20932073218831, .adsr_envelope = (double[]) {-0.0847244094488189, -0.338897637795276, 1.37362204724409, 0.05}}
						}, .duration = 0.493655, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.249513, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.51221, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.51221, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.51221, .peak_intensity = 5.9353898742577, .sustain_intensity = 2.37415594970308, .adsr_envelope = (double[]) {-0.0891338582677166, -0.356535433070866, 1.39566929133858, 0.05}}
						}, .duration = 0.51221, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.49512, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.49512, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "As", .octave = 3, .duration = 0.49512, .peak_intensity = 5.52330183047076, .sustain_intensity = 2.20932073218831, .adsr_envelope = (double[]) {-0.0847244094488189, -0.338897637795276, 1.37362204724409, 0.05}}
						}, .duration = 0.49512, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 3, .duration = 0.49512, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.49512, .peak_intensity = 4.45089503245712, .sustain_intensity = 1.78035801298285, .adsr_envelope = (double[]) {-0.071496062992126, -0.285984251968504, 1.30748031496063, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.49512, .peak_intensity = 5.72563968103523, .sustain_intensity = 2.29025587241409, .adsr_envelope = (double[]) {-0.0869291338582677, -0.347716535433071, 1.38464566929134, 0.05}}
						}, .duration = 0.49512, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.246095, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "E", .octave = 3, .duration = 0.493655, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "G", .octave = 3, .duration = 0.493655, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.493655, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}}
						}, .duration = 0.493655, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 4.14187394607809, .sustain_intensity = 1.65674957843123, .adsr_envelope = (double[]) {-0.0670866141732284, -0.268346456692913, 1.28543307086614, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 5, .duration = 0.249513, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}}
						}, .duration = 1.007818, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 4.14187394607809, .sustain_intensity = 1.65674957843123, .adsr_envelope = (double[]) {-0.0670866141732284, -0.268346456692913, 1.28543307086614, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 4.14187394607809, .sustain_intensity = 1.65674957843123, .adsr_envelope = (double[]) {-0.0670866141732284, -0.268346456692913, 1.28543307086614, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 5, .duration = 0.249513, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}}
						}, .duration = 1.007818, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 4.14187394607809, .sustain_intensity = 1.65674957843123, .adsr_envelope = (double[]) {-0.0670866141732284, -0.268346456692913, 1.28543307086614, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 4.14187394607809, .sustain_intensity = 1.65674957843123, .adsr_envelope = (double[]) {-0.0670866141732284, -0.268346456692913, 1.28543307086614, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 5, .duration = 0.249513, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}}
						}, .duration = 1.007818, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 4.14187394607809, .sustain_intensity = 1.65674957843123, .adsr_envelope = (double[]) {-0.0670866141732284, -0.268346456692913, 1.28543307086614, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 4.14187394607809, .sustain_intensity = 1.65674957843123, .adsr_envelope = (double[]) {-0.0670866141732284, -0.268346456692913, 1.28543307086614, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 5, .duration = 0.249513, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}}
						}, .duration = 1.007818, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 4.14187394607809, .sustain_intensity = 1.65674957843123, .adsr_envelope = (double[]) {-0.0670866141732284, -0.268346456692913, 1.28543307086614, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 4.14187394607809, .sustain_intensity = 1.65674957843123, .adsr_envelope = (double[]) {-0.0670866141732284, -0.268346456692913, 1.28543307086614, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 5, .duration = 0.249513, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}}
						}, .duration = 1.007818, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 4.14187394607809, .sustain_intensity = 1.65674957843123, .adsr_envelope = (double[]) {-0.0670866141732284, -0.268346456692913, 1.28543307086614, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 4.14187394607809, .sustain_intensity = 1.65674957843123, .adsr_envelope = (double[]) {-0.0670866141732284, -0.268346456692913, 1.28543307086614, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}}
						}, .duration = 0.989263, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.002442, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.002442, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.263673, .peak_intensity = 4.14187394607809, .sustain_intensity = 1.65674957843123, .adsr_envelope = (double[]) {-0.0670866141732284, -0.268346456692913, 1.28543307086614, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.989263, .peak_intensity = 5.13982463777023, .sustain_intensity = 2.05592985510809, .adsr_envelope = (double[]) {-0.0803149606299213, -0.321259842519685, 1.35157480314961, 0.05}}
						}, .duration = 0.989263, .num_notes = 2}
					}, .playback_type = PLAYBACK_MONO, .length = 282},
					{.music_chords = (struct MusicChord[]) {
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 2.266615, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 2.266615, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262209, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262209, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251954, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251954, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.233888, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231447, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262209, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.499026, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}}
						}, .duration = 0.499026, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.015137, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.015137, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.232912, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.232423, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262209, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262209, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251954, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251954, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.232423, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262209, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262209, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251954, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251954, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}},
							{.note = "G", .octave = 5, .duration = 0.744145, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}}
						}, .duration = 0.744145, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.247072, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.247072, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262209, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}},
							{.note = "Cs", .octave = 5, .duration = 0.499026, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}}
						}, .duration = 0.499026, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.015137, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.015137, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.743169, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}}
						}, .duration = 0.743169, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.249513, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.249513, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262209, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}},
							{.note = "A", .octave = 4, .duration = 0.528812, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.528812, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.479983, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.479983, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262209, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262209, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251954, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251954, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231447, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.232423, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262209, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262209, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251954, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251954, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262209, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262209, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251954, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251954, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.233888, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231447, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.232423, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262209, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262209, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251954, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251954, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.233888, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.232423, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262209, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262209, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251954, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251954, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262209, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262209, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251954, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251954, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}},
							{.note = "G", .octave = 5, .duration = 0.744145, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}}
						}, .duration = 0.744145, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.247072, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.247072, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262209, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}},
							{.note = "Cs", .octave = 5, .duration = 0.761723, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}}
						}, .duration = 0.761723, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.247072, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.247072, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.233888, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "E", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.231447, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "E", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.232423, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "E", .octave = 4, .duration = 0.262209, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262209, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251954, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251954, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.232912, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.233888, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "As", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 1.241707, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 1.241707, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.246095, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.232423, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262209, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262209, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251954, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251954, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.24756, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.235604, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.235604, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 4, .duration = 0.265428, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.265428, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.238515, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.238515, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "As", .octave = 4, .duration = 0.240988, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.271937, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.271937, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.256265, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.256265, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.231446, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.247071, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262208, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.232911, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232423, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.262208, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262208, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "As", .octave = 5, .duration = 0.232911, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "F", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.232423, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "F", .octave = 4, .duration = 0.262208, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262208, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232911, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.232423, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.262208, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262208, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.24756, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.497561, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}}
						}, .duration = 0.497561, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.231446, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}},
							{.note = "C", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.262208, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.761723, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}}
						}, .duration = 0.761723, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 4, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "B", .octave = 2, .duration = 0.741703, .peak_intensity = 3.52276204985456, .sustain_intensity = 1.40910481994183, .adsr_envelope = (double[]) {-0.0571653543307087, -0.228661417322835, 1.23582677165354, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.741703, .peak_intensity = 4.53168767908628, .sustain_intensity = 1.81267507163451, .adsr_envelope = (double[]) {-0.0725984251968504, -0.290393700787402, 1.31299212598425, 0.05}}
						}, .duration = 0.741703, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.250002, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.250002, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.758794, .peak_intensity = 3.65181313616047, .sustain_intensity = 1.46072525446419, .adsr_envelope = (double[]) {-0.0593700787401575, -0.23748031496063, 1.24685039370079, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.758794, .peak_intensity = 4.69769923749095, .sustain_intensity = 1.87907969499638, .adsr_envelope = (double[]) {-0.0748031496062992, -0.299212598425197, 1.3240157480315, 0.05}}
						}, .duration = 0.758794, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.249513, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.249513, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 4, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "B", .octave = 2, .duration = 0.741703, .peak_intensity = 3.52276204985456, .sustain_intensity = 1.40910481994183, .adsr_envelope = (double[]) {-0.0571653543307087, -0.228661417322835, 1.23582677165354, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.741703, .peak_intensity = 4.53168767908628, .sustain_intensity = 1.81267507163451, .adsr_envelope = (double[]) {-0.0725984251968504, -0.290393700787402, 1.31299212598425, 0.05}}
						}, .duration = 0.741703, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.250002, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.250002, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.758794, .peak_intensity = 3.65181313616047, .sustain_intensity = 1.46072525446419, .adsr_envelope = (double[]) {-0.0593700787401575, -0.23748031496063, 1.24685039370079, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.758794, .peak_intensity = 4.69769923749095, .sustain_intensity = 1.87907969499638, .adsr_envelope = (double[]) {-0.0748031496062992, -0.299212598425197, 1.3240157480315, 0.05}}
						}, .duration = 0.758794, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.249513, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.249513, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 4, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "B", .octave = 2, .duration = 0.741703, .peak_intensity = 3.52276204985456, .sustain_intensity = 1.40910481994183, .adsr_envelope = (double[]) {-0.0571653543307087, -0.228661417322835, 1.23582677165354, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.741703, .peak_intensity = 4.53168767908628, .sustain_intensity = 1.81267507163451, .adsr_envelope = (double[]) {-0.0725984251968504, -0.290393700787402, 1.31299212598425, 0.05}}
						}, .duration = 0.741703, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.250002, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.250002, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 0.758794, .peak_intensity = 3.65181313616047, .sustain_intensity = 1.46072525446419, .adsr_envelope = (double[]) {-0.0593700787401575, -0.23748031496063, 1.24685039370079, 0.05}},
							{.note = "A", .octave = 3, .duration = 0.758794, .peak_intensity = 4.69769923749095, .sustain_intensity = 1.87907969499638, .adsr_envelope = (double[]) {-0.0748031496062992, -0.299212598425197, 1.3240157480315, 0.05}}
						}, .duration = 0.758794, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.249513, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.249513, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.263673, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}},
							{.note = "B", .octave = 2, .duration = 0.741703, .peak_intensity = 3.52276204985456, .sustain_intensity = 1.40910481994183, .adsr_envelope = (double[]) {-0.0571653543307087, -0.228661417322835, 1.23582677165354, 0.05}},
							{.note = "Fs", .octave = 3, .duration = 0.741703, .peak_intensity = 4.53168767908628, .sustain_intensity = 1.81267507163451, .adsr_envelope = (double[]) {-0.0725984251968504, -0.290393700787402, 1.31299212598425, 0.05}}
						}, .duration = 0.741703, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.250002, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.250002, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 3, .duration = 0.279298, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "D", .octave = 3, .duration = 1.007818, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}}
						}, .duration = 1.007818, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.249514, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.249514, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231446, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.761723, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}}
						}, .duration = 0.761723, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231447, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.483402, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.483402, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.492678, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}}
						}, .duration = 0.492678, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "A", .octave = 4, .duration = 0.761723, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}}
						}, .duration = 0.761723, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.483402, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.483402, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "G", .octave = 5, .duration = 0.744145, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}}
						}, .duration = 0.744145, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.493655, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.493655, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.267092, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.267092, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.744145, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}}
						}, .duration = 0.744145, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.246095, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.499515, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.499515, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.494144, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}}
						}, .duration = 0.494144, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.233888, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.231446, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.246095, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.232423, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.247071, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.233888, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.231446, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.246095, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.232423, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.247071, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.233888, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.248536, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.232423, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "G", .octave = 5, .duration = 0.744145, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}}
						}, .duration = 0.744145, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.493655, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.493655, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.267092, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.267092, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.233888, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}},
							{.note = "E", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.231446, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}},
							{.note = "E", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.232423, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}},
							{.note = "E", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.232911, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.232911, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.261721, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.261721, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.233888, .peak_intensity = 4.14187394607809, .sustain_intensity = 1.65674957843123, .adsr_envelope = (double[]) {-0.0670866141732284, -0.268346456692913, 1.28543307086614, 0.05}}
						}, .duration = 0.233888, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 1.006842, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 1.006842, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.51221, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "A", .octave = 2, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.758794, .peak_intensity = 5.9353898742577, .sustain_intensity = 2.37415594970308, .adsr_envelope = (double[]) {-0.0891338582677166, -0.356535433070866, 1.39566929133858, 0.05}}
						}, .duration = 0.758794, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 2, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.248536, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}}
						}, .duration = 0.248536, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.249514, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.249514, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.246095, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.246095, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.231447, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.5293, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.5293, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.24756, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.24756, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.49512, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.49512, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.496097, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.496097, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.231447, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.777348, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.777348, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.49512, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.49512, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.249514, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.249514, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.231446, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.231446, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.015137, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.015137, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.231447, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.5293, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.5293, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.232911, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.232911, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.015137, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.015137, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.49512, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.49512, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.496097, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.496097, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.231447, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.5293, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.5293, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "As", .octave = 5, .duration = 0.232911, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.232911, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.015137, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.015137, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.49512, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.49512, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.742681, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.742681, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.232423, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.232423, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.28174, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.28174, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232911, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.232911, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.261721, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.261721, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.248536, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.248536, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.742681, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.742681, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.232423, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.232423, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.28174, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.28174, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.24756, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.24756, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.247072, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.247072, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.497561, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.497561, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.231446, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.231446, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.261721, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.261721, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.761723, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.761723, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.247072, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.247072, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.235011, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.235011, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263629, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263629, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234928, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234928, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.26702, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.26702, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.235011, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.235011, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263629, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263629, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234928, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234928, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.26702, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.26702, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.235011, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.235011, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263629, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263629, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234928, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234928, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.26702, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.26702, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 2.8903105185396, .sustain_intensity = 1.15612420741584, .adsr_envelope = (double[]) {-0.0450393700787402, -0.180157480314961, 1.1751968503937, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 2.41445055706788, .sustain_intensity = 0.965780222827151, .adsr_envelope = (double[]) {-0.0340157480314961, -0.136062992125984, 1.12007874015748, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.235011, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.235011, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.233497, .peak_intensity = 2.8903105185396, .sustain_intensity = 1.15612420741584, .adsr_envelope = (double[]) {-0.0450393700787402, -0.180157480314961, 1.1751968503937, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.263629, .peak_intensity = 2.01693605414788, .sustain_intensity = 0.806774421659153, .adsr_envelope = (double[]) {-0.022992125984252, -0.0919685039370079, 1.06496062992126, 0.05}}
						}, .duration = 0.263629, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234928, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234928, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.26702, .peak_intensity = 1.68486823414677, .sustain_intensity = 0.673947293658706, .adsr_envelope = (double[]) {-0.0119685039370079, -0.0478740157480315, 1.00984251968504, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.503838, .peak_intensity = 2.59459030633767, .sustain_intensity = 1.03783612253507, .adsr_envelope = (double[]) {-0.0384251968503937, -0.153700787401575, 1.14212598425197, 0.05}}
						}, .duration = 0.503838, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.015137, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.015137, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.494144, .peak_intensity = 2.41445055706788, .sustain_intensity = 0.965780222827151, .adsr_envelope = (double[]) {-0.0340157480314961, -0.136062992125984, 1.12007874015748, 0.05}}
						}, .duration = 0.494144, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.235011, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.235011, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263629, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.263629, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234928, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234928, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.26702, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.26702, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.233888, .peak_intensity = 2.41445055706788, .sustain_intensity = 0.965780222827151, .adsr_envelope = (double[]) {-0.0340157480314961, -0.136062992125984, 1.12007874015748, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.235011, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.235011, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.233497, .peak_intensity = 2.41445055706788, .sustain_intensity = 0.965780222827151, .adsr_envelope = (double[]) {-0.0340157480314961, -0.136062992125984, 1.12007874015748, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.263629, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.263629, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234928, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234928, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.23691, .peak_intensity = 2.41445055706788, .sustain_intensity = 0.965780222827151, .adsr_envelope = (double[]) {-0.0340157480314961, -0.136062992125984, 1.12007874015748, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.26702, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.26702, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.233888, .peak_intensity = 2.41445055706788, .sustain_intensity = 0.965780222827151, .adsr_envelope = (double[]) {-0.0340157480314961, -0.136062992125984, 1.12007874015748, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.235011, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.235011, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263629, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.263629, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234928, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234928, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.23691, .peak_intensity = 2.41445055706788, .sustain_intensity = 0.965780222827151, .adsr_envelope = (double[]) {-0.0340157480314961, -0.136062992125984, 1.12007874015748, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.26702, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.26702, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.262208, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262697, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.263673, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}},
							{.note = "G", .octave = 5, .duration = 0.746981, .peak_intensity = 2.41445055706788, .sustain_intensity = 0.965780222827151, .adsr_envelope = (double[]) {-0.0340157480314961, -0.136062992125984, 1.12007874015748, 0.05}}
						}, .duration = 0.746981, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.25026, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.25026, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.26702, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.26702, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262697, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.263673, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.746981, .peak_intensity = 2.41445055706788, .sustain_intensity = 0.965780222827151, .adsr_envelope = (double[]) {-0.0340157480314961, -0.136062992125984, 1.12007874015748, 0.05}}
						}, .duration = 0.746981, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.25026, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.25026, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.26702, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}},
							{.note = "A", .octave = 4, .duration = 0.533623, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.533623, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.479984, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.479984, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.235011, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.235011, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263629, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.263629, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234928, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234928, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.26702, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.26702, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.231446, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.246095, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.499026, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.513675, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.513675, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "A", .octave = 4, .duration = 0.494144, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.494144, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}}
						}, .duration = 0.494144, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.231446, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.246095, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.232423, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.247071, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.233888, .peak_intensity = 3.33768581502476, .sustain_intensity = 1.3350743260099, .adsr_envelope = (double[]) {-0.0538582677165354, -0.215433070866142, 1.21929133858268, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.248536, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.232423, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "G", .octave = 5, .duration = 0.744145, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}}
						}, .duration = 0.744145, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.493655, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.493655, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.267092, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.267092, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.233888, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}},
							{.note = "E", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.231446, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}},
							{.note = "E", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.232423, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}},
							{.note = "E", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.232911, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.232911, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.261721, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.261721, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.233888, .peak_intensity = 4.14187394607809, .sustain_intensity = 1.65674957843123, .adsr_envelope = (double[]) {-0.0670866141732284, -0.268346456692913, 1.28543307086614, 0.05}}
						}, .duration = 0.233888, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 1.006842, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 1.006842, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.51221, .peak_intensity = 5.32811437847341, .sustain_intensity = 2.13124575138936, .adsr_envelope = (double[]) {-0.0825196850393701, -0.33007874015748, 1.36259842519685, 0.05}},
							{.note = "A", .octave = 2, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.758794, .peak_intensity = 4.61394687383706, .sustain_intensity = 1.84557874953482, .adsr_envelope = (double[]) {-0.0737007874015748, -0.294803149606299, 1.31850393700787, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.758794, .peak_intensity = 5.9353898742577, .sustain_intensity = 2.37415594970308, .adsr_envelope = (double[]) {-0.0891338582677166, -0.356535433070866, 1.39566929133858, 0.05}}
						}, .duration = 0.758794, .num_notes = 4},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 2, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "C", .octave = 3, .duration = 0.233888, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "F", .octave = 3, .duration = 0.248536, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}}
						}, .duration = 0.248536, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.249514, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.249514, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.246095, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.246095, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.231447, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.5293, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.5293, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.24756, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.24756, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.49512, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.49512, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.496097, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.496097, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.231447, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.777348, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.777348, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.49512, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.49512, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.249514, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.249514, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.231446, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.231446, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.015137, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.015137, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.231447, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.5293, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.5293, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.232911, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.232911, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.015137, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.015137, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.49512, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.49512, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.496097, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.496097, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.231447, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.5293, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.5293, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "As", .octave = 5, .duration = 0.232911, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.232911, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.015137, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.015137, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.246096, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.246096, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.233888, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.233888, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.757329, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.757329, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.232423, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.232423, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.28174, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.28174, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232911, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.232911, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.261721, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.261721, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.233888, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.233888, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.757329, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.757329, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "C", .octave = 5, .duration = 0.232423, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.232423, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.28174, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.28174, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "F", .octave = 5, .duration = 0.24756, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.24756, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.247072, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.247072, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.497561, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.497561, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.231446, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.231446, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.261721, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.261721, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 1.257331, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 1.257331, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.249514, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.249514, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232423, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262208, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232911, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262697, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.497561, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.497561, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.231446, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.246095, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "A", .octave = 4, .duration = 0.761723, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.761723, .peak_intensity = 5.04818989479983, .sustain_intensity = 2.01927595791993, .adsr_envelope = (double[]) {-0.0792125984251969, -0.316850393700787, 1.34606299212598, 0.05}}
						}, .duration = 0.761723, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.483402, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.483402, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.246095, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232423, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262208, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232911, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262697, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.497561, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.497561, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.231446, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.246095, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "A", .octave = 4, .duration = 0.761723, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.761723, .peak_intensity = 5.04818989479983, .sustain_intensity = 2.01927595791993, .adsr_envelope = (double[]) {-0.0792125984251969, -0.316850393700787, 1.34606299212598, 0.05}}
						}, .duration = 0.761723, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.483402, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.483402, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.246095, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232423, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262208, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232911, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262697, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.497561, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.497561, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.231446, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.246095, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "A", .octave = 4, .duration = 0.761723, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.761723, .peak_intensity = 5.04818989479983, .sustain_intensity = 2.01927595791993, .adsr_envelope = (double[]) {-0.0792125984251969, -0.316850393700787, 1.34606299212598, 0.05}}
						}, .duration = 0.761723, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.483402, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.483402, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232423, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262208, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232911, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262697, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.497561, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.497561, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.231446, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.246095, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "A", .octave = 4, .duration = 0.761723, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.761723, .peak_intensity = 5.04818989479983, .sustain_intensity = 2.01927595791993, .adsr_envelope = (double[]) {-0.0792125984251969, -0.316850393700787, 1.34606299212598, 0.05}}
						}, .duration = 0.761723, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.483402, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.483402, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.246095, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232423, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262208, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.251955, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.251955, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.232911, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262697, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.497561, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.497561, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.231446, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.246095, .peak_intensity = 5.42483031067146, .sustain_intensity = 2.16993212426858, .adsr_envelope = (double[]) {-0.0836220472440945, -0.334488188976378, 1.36811023622047, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "A", .octave = 4, .duration = 0.761723, .peak_intensity = 4.2170572419473, .sustain_intensity = 1.68682289677892, .adsr_envelope = (double[]) {-0.0681889763779528, -0.272755905511811, 1.29094488188976, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.761723, .peak_intensity = 5.04818989479983, .sustain_intensity = 2.01927595791993, .adsr_envelope = (double[]) {-0.0792125984251969, -0.316850393700787, 1.34606299212598, 0.05}}
						}, .duration = 0.761723, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.483402, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.483402, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.261232, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "D", .octave = 4, .duration = 0.261232, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262208, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "A", .octave = 5, .duration = 0.761723, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.761723, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.483402, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.483402, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 5, .duration = 0.231446, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.231446, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.015137, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.015137, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.246095, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}}
						}, .duration = 0.246095, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000489, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000489, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.761723, .peak_intensity = 4.86979237950764, .sustain_intensity = 1.94791695180306, .adsr_envelope = (double[]) {-0.077007874015748, -0.308031496062992, 1.33503937007874, 0.05}}
						}, .duration = 0.761723, .num_notes = 1}
					}, .playback_type = PLAYBACK_MONO, .length = 298},
					{.music_chords = (struct MusicChord[]) {
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 11.259345, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 11.259345, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 1.24073, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 1.24073, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.263673, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 1.241707, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 1.241707, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.494144, .peak_intensity = 3.05057958456502, .sustain_intensity = 1.22023183382601, .adsr_envelope = (double[]) {-0.0483464566929134, -0.193385826771654, 1.19173228346457, 0.05}}
						}, .duration = 0.494144, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 12.49861, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 12.49861, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.261232, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.746098, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.746098, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262697, .peak_intensity = 2.45827766357977, .sustain_intensity = 0.983311065431909, .adsr_envelope = (double[]) {-0.0351181102362205, -0.140472440944882, 1.1255905511811, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 19.002718, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 19.002718, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.246095, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.246095, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.514652, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.514652, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.494144, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}}
						}, .duration = 0.494144, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.000488, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.000488, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.48096, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.48096, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 5, .duration = 0.246095, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.499515, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.499515, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "D", .octave = 5, .duration = 0.497561, .peak_intensity = 3.85430787742706, .sustain_intensity = 1.54172315097082, .adsr_envelope = (double[]) {-0.0626771653543307, -0.250708661417323, 1.26338582677165, 0.05}}
						}, .duration = 0.497561, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.247072, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.247072, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.499515, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.499515, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.48096, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.48096, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231447, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.483402, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.483402, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.500003, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.500003, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231447, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.483402, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.483402, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}},
							{.note = "A", .octave = 4, .duration = 0.528811, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.528811, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.2334, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.2334, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.246095, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.246095, .peak_intensity = 4.37154278777346, .sustain_intensity = 1.74861711510938, .adsr_envelope = (double[]) {-0.0703937007874016, -0.281574803149606, 1.30196850393701, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.246095, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.246095, .peak_intensity = 4.37154278777346, .sustain_intensity = 1.74861711510938, .adsr_envelope = (double[]) {-0.0703937007874016, -0.281574803149606, 1.30196850393701, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.231447, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.246096, .peak_intensity = 4.37154278777346, .sustain_intensity = 1.74861711510938, .adsr_envelope = (double[]) {-0.0703937007874016, -0.281574803149606, 1.30196850393701, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.231447, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.246095, .peak_intensity = 4.37154278777346, .sustain_intensity = 1.74861711510938, .adsr_envelope = (double[]) {-0.0703937007874016, -0.281574803149606, 1.30196850393701, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231447, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.483402, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.483402, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.500003, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.500003, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231447, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231447, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 16.499611, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 16.499611, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 2.990259, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 2.990259, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.264668, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.264668, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.75212, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.75212, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234377, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234377, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "B", .octave = 3, .duration = 0.264437, .peak_intensity = 3.27818028646485, .sustain_intensity = 1.31127211458594, .adsr_envelope = (double[]) {-0.052755905511811, -0.211023622047244, 1.21377952755906, 0.05}}
						}, .duration = 0.264437, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.234014, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.234014, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.264668, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.264668, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 11.540792, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 11.540792, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.263629, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.263629, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 1.747219, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 1.747219, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.263629, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}}
						}, .duration = 0.263629, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.753903, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.753903, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 1.94565973767376, .sustain_intensity = 0.778263895069504, .adsr_envelope = (double[]) {-0.0207874015748032, -0.0831496062992126, 1.05393700787402, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.494144, .peak_intensity = 2.41445055706788, .sustain_intensity = 0.965780222827151, .adsr_envelope = (double[]) {-0.0340157480314961, -0.136062992125984, 1.12007874015748, 0.05}}
						}, .duration = 0.494144, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 3.764764, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 3.764764, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.246095, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.246095, .peak_intensity = 4.37154278777346, .sustain_intensity = 1.74861711510938, .adsr_envelope = (double[]) {-0.0703937007874016, -0.281574803149606, 1.30196850393701, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.231447, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.246096, .peak_intensity = 4.37154278777346, .sustain_intensity = 1.74861711510938, .adsr_envelope = (double[]) {-0.0703937007874016, -0.281574803149606, 1.30196850393701, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "G", .octave = 4, .duration = 0.231447, .peak_intensity = 3.39827148793909, .sustain_intensity = 1.35930859517563, .adsr_envelope = (double[]) {-0.0549606299212599, -0.219842519685039, 1.2248031496063, 0.05}},
							{.note = "E", .octave = 5, .duration = 0.246095, .peak_intensity = 4.37154278777346, .sustain_intensity = 1.74861711510938, .adsr_envelope = (double[]) {-0.0703937007874016, -0.281574803149606, 1.30196850393701, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231447, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.483402, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.483402, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.261232, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.261232, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "E", .octave = 4, .duration = 0.262208, .peak_intensity = 3.10595370518404, .sustain_intensity = 1.24238148207362, .adsr_envelope = (double[]) {-0.0494488188976378, -0.197795275590551, 1.19724409448819, 0.05}}
						}, .duration = 0.262208, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.500003, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.500003, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231447, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 5, .duration = 0.231447, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}},
							{.note = "G", .octave = 4, .duration = 0.261232, .peak_intensity = 3.16233297684054, .sustain_intensity = 1.26493319073622, .adsr_envelope = (double[]) {-0.0505511811023622, -0.202204724409449, 1.20275590551181, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 16.499611, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 16.499611, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.48096, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.48096, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.246095, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.246095, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.246095, .peak_intensity = 5.52330183047076, .sustain_intensity = 2.20932073218831, .adsr_envelope = (double[]) {-0.0847244094488189, -0.338897637795276, 1.37362204724409, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.499515, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.499515, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.48096, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.48096, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.246095, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.246095, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.246095, .peak_intensity = 5.52330183047076, .sustain_intensity = 2.20932073218831, .adsr_envelope = (double[]) {-0.0847244094488189, -0.338897637795276, 1.37362204724409, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.499515, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.499515, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.48096, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.48096, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.246095, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.246095, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.246095, .peak_intensity = 5.52330183047076, .sustain_intensity = 2.20932073218831, .adsr_envelope = (double[]) {-0.0847244094488189, -0.338897637795276, 1.37362204724409, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.499515, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.499515, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.48096, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.48096, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.246095, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.246095, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.246095, .peak_intensity = 5.52330183047076, .sustain_intensity = 2.20932073218831, .adsr_envelope = (double[]) {-0.0847244094488189, -0.338897637795276, 1.37362204724409, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.499515, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.499515, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.48096, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.48096, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.246095, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.747563, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.747563, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 5, .duration = 0.231447, .peak_intensity = 4.95818885078046, .sustain_intensity = 1.98327554031218, .adsr_envelope = (double[]) {-0.0781102362204725, -0.31244094488189, 1.34055118110236, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.729985, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.729985, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 4, .duration = 0.246095, .peak_intensity = 4.29360526500312, .sustain_intensity = 1.71744210600125, .adsr_envelope = (double[]) {-0.0692913385826772, -0.277165354330709, 1.29645669291339, 0.05}},
							{.note = "Fs", .octave = 5, .duration = 0.246095, .peak_intensity = 5.52330183047076, .sustain_intensity = 2.20932073218831, .adsr_envelope = (double[]) {-0.0847244094488189, -0.338897637795276, 1.37362204724409, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 3},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.499515, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.499515, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.263673, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.48096, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.48096, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "A", .octave = 5, .duration = 0.246095, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}},
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 2},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.499515, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.499515, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.262697, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.262697, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 0.231935, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 0.231935, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "D", .octave = 4, .duration = 0.263673, .peak_intensity = 3.92427127401812, .sustain_intensity = 1.56970850960725, .adsr_envelope = (double[]) {-0.0637795275590551, -0.255118110236221, 1.26889763779528, 0.05}}
						}, .duration = 0.263673, .num_notes = 1}
					}, .playback_type = PLAYBACK_MONO, .length = 97},
					{.music_chords = (struct MusicChord[]) {
						{.music_notes = (struct MusicNote[]) {
							{.note = "S", .octave = 0, .duration = 150.649953, .peak_intensity = 0, .sustain_intensity = 0, .adsr_envelope = (double[]) {0, 0, 0, 0}}
						}, .duration = 150.649953, .num_notes = 1},
						{.music_notes = (struct MusicNote[]) {
							{.note = "Fs", .octave = 4, .duration = 0.261232, .peak_intensity = 3.99550464618409, .sustain_intensity = 1.59820185847364, .adsr_envelope = (double[]) {-0.0648818897637795, -0.259527559055118, 1.2744094488189, 0.05}}
						}, .duration = 0.261232, .num_notes = 1}
					}, .playback_type = PLAYBACK_MONO, .length = 1}
				}, .num_tracks = 4}
				
			};

#endif