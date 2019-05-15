#ifndef music
#define music

struct MusicNote {
	char * note;
	int octave;
};

struct MusicChord {
	struct MusicNote * music_notes;
	double duration;
	double intensity;
	unsigned int num_notes;
};

struct MusicSong {
	struct MusicChord * music_chords;
	unsigned int length;
};

struct MusicWave {
	double * waveform;
	unsigned int length;
};

double get_frequency(char * note, int octave);
int get_num(char * note, int octave);
struct MusicWave get_chord_wave(struct MusicChord music_chord);
struct MusicWave get_note_wave(struct MusicNote music_note, unsigned int number_of_samples);
struct MusicWave copy_wave(struct MusicWave wave);

#endif