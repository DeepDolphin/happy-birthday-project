# Project Description:
An application for synthesizing and playing music (specifically happy birthday) to be ran on an ARM processor on a DE1-SoC FPGA board.

# Status Reports:

## Day 1

Start: 5/13/2019 10:28:03

End: 5/13/2019 18:33:08

Accomplished:
  -	Notes of any tone and octave can be played
  - Any length note can be played
  - Moved updating the audio controller into the audio controller interrupt service routine
    - This allows the main function to continue with processing future notes
  -	Set up a structure to allow for a constant stream of audio
    - Processing notes to be played back later in main
    - Updating the stream waveform as the notes are played back in the audio controller
  -	Set up the stopping and starting of audio using the keys
  -	Added the structure to store a song for future processing and possibilities for different songs
  -	Added a test song
  -	Added an LED to show when a song has been fully processed into a waveform
  -	Tested on DE1-SoC board
    - Everything ran well
  -	Added ability to change volume of song with keys
  -	Added flags to allow for keys to play/pause song and restart (clear the queue)  
  -	Fixed the issue of double notes when stopping in the middle of processing
  
Difficulties:
  -	Debugging why there was no playback
    - Intensity was being zeroed out incorrectly
  -	Debugging why the wrong frequency was being played back
    - Integer division by accident
  -	Thinking of a proper structure to use to allow for constant updating and processing to happen simultaneously
    - Decided to use a linked list as a queue instead of an array as a queue
    
Future Goals:
  -	Add ability to change between songs without need for recompilation
  -	Add more songs (happy birthday, twinkle twinkle, etc.)
  -	Add ADSR envelope to notes to make them more realistic
  -	Make processing music quicker
  -	Add ability to have multiple tracks on a song so chords can be played
  -	Add ability to track how caught up the processing is to the rate of playback
    -	Instead of merely if the processing is finished or not
  -	Change volume display to be in decimal not hexadecimal
  -	Fix clearing with key 1, leads to an endless loop when attempting to process more notes

## Day 2
Start: 5/14/2019 12:54:47

End: 5/14/2019 18:44:04

Accomplished:
  - Fixed endless loop when clearing
  - Added a function to display all information into the main loop
  - Changed volume display to be in decimal not hexadecimal
  - Added displaying the current length of audiostream to the hexes
  - Added chords instead of merely singular notes in a song
  
Difficulties:
  - Figuring out how to be able to represent chords and play them simultaneously without slowing the program down too much
  
Future Goals:
  - Add ability to change between songs without need for recompilation
  - Add more songs (happy birthday, twinkle twinkle, etc.)
  - Add ADSR envelope to notes to make them more realistic
  - Add ability to have multiple tracks on a song so multiple chords can be played at different times

## Day 3
Start: 5/16/2019 12:48:03

End: 5/16/2019 15:35:14

Accomplished:
  - Split and refactored all audio stream functionality into its own file
  - Added the construct of “tracks” to a song

Difficulties:
  - Figuring out how to share global variables between two files in C

Future Goals:
  - Add ability to either interpret the midi format or translate a midi song into the format that is already being used
  - Populate the shortest track first
    - the queue with the least amount of total time of ready to play chords
  - Add ability to change between songs without need for recompilation
  -	Add more songs (happy birthday, twinkle twinkle, etc.)
  -	Add ADSR envelope to notes to make them more realistic
  -	Add current duration stored to the hexes instead of length
  
## Day 4
Start: 5/17/2019 13:01:05

End: 5/17/2019 16:52:51

Accomplished:
  - Added current processed duration to the hexes
  - Populates shortest track first
  - Added ability to change between songs with the switches
  - Added a simple version of happy birthday to the song list
  - Added an ADSR envelope to make the notes sound more realistic
  - Added harmonics to each note generated to make the notes sound more realistic
Difficulties:

Future Goals:
  - Add ability to either interpret the midi format or translate a midi song into the format that is already being used
  - Add more songs (still alive, etc.)

## Day 5
Start: 5/20/2019 13:00:00

End: 5/20/2019 19:42:20

Accomplished:
  - Researched about what libraries there are to read a midi file and operate at a high level
  - Started working on a midi converter to change notes from midi format to the format recognized by this program
  - Changed the structure for music notes to more closely match those in a midi
  - Changed volume to be offset and more drastic (exponential curve instead of linear)
  - Added an adsr envelope as well as a sustain and peak intensity to notes to allow for manual changes
  - Added checking for frequency and volume overflow
  - Generalized harmonics, allowing for a later ease in increase of them
Difficulties:
  - Understanding how midi files work
  - Finding a good library to use midi files at a high level so a full understanding of the midi file structure does not need to be achieved
Future Goals:
  - Add ability to either interpret the midi format or translate a midi song into the format that is already being used
  - Add more songs (still alive, etc.)
  
## Day 6
Start: 5/21/2019 11:16:24

End: 5/21/2019 19:14:12

Accomplished:
  - Added the ability to translate a midi song into the format that is already being used
  - Added still alive as a test of the midi translator and ability of the synth to play multiple tracks
  - Added a check to make sure that the chosen song is valid when changing songs
  - Changed to show minutes when not showing deci-seconds
  - Added more songs
  - Fixed it not reloading after a song is finished
Difficulties:
  - Debugging having multiple tracks ending at different times
Future Goals:
  - Possibly precompute the waveforms for all possible notes ahead of time so that synthesizing a song is faster on the go

## Day 7
Start: 5/22/2019 10:55:15

End: 5/22/2019 18:43:44

Accomplished:
  - Attempted to calculate sine through interpolation of an example sine wave
  - Added a lazy instanced cache to store music waves to speed up the song generation
  - Finished project
  
Difficulties:
  - Figuring out how to convert from one sampling rate to another
  
Future Goals:
