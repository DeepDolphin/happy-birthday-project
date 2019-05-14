#ifndef music
#define music

struct MusicNote {
	char * note;
	int octave;
	double duration;
	double intensity;
};

struct MusicSong {
	struct MusicNote * music_notes;
	unsigned int length;
};

struct MusicWave {
	double * waveform;
	unsigned int length;
};

double get_frequency(char * note, int octave);
int get_num(char * note, int octave);
struct MusicWave get_wave(struct MusicNote note);
struct MusicWave copy_wave(struct MusicWave wave);

#endif