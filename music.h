#ifndef music
#define music

#define MAX_FREQUENCY 3750

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

struct MusicCache {
	struct CacheWave * cache_lines;
};

struct CacheWave {
	double * waveform;
	unsigned int allocated_length;
	unsigned int used_length;
};

double get_frequency(int key_number);
int get_num(char * note, int octave);
struct MusicWave get_chord_wave(struct MusicChord music_chord);
struct MusicWave get_note_wave(struct MusicNote music_note);
void initialize_cache();
void expand_cache_line(struct CacheWave * cache_line);

#endif