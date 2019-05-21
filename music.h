#ifndef music
#define music

struct MusicNote {
	char * note;
	int octave;
	double duration; //in seconds
	double peak_intensity; //expected between 0-10
	double sustain_intensity; //expected between 0-10
	double * adsr_envelope; //array of attack, delay, sustain, and release proportions (must add up to 1)
};

struct MusicChord {
	struct MusicNote * music_notes;
	double duration; //in seconds of longest note in chord
	unsigned int num_notes;
};

#define PLAYBACK_MONO 0
#define PLAYBACK_STEREO_R 1
#define PLAYBACK_STEREO_L 2
struct MusicTrack {
	struct MusicChord * music_chords;
	char playback_type;
	unsigned int length;
};

struct MusicSong {
	struct MusicTrack * music_tracks;
	unsigned int num_tracks;
};

struct MusicWave {
	double * waveform;
	unsigned int length;
};

double get_frequency(char * note, int octave);
int get_num(char * note, int octave);
struct MusicWave get_chord_wave(struct MusicChord music_chord);
struct MusicWave get_note_wave(struct MusicNote music_note);

#endif