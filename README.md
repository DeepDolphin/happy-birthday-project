# Project Description:
An application for playing music (specifically happy birthday) to be ran on an ARM processor on a DE1-SoC FPGA board.

# Status Reports:

Day 1

Start: 5/13/2019 10:28:03

End: 5/13/2019 18:33:08

Accomplished:
  -	Notes of any tone and octave can be played
  - Any length note can be played
  - Moved updating the audio controller into the audio controller interrupt service routine
    -	This allows the main function to continue with processing future notes
  -	Set up a structure to allow for a constant stream of audio
    -	Processing notes to be played back later in main
    -	Updating the stream waveform as the notes are played back in the audio controller
  -	Set up the stopping and starting of audio using the keys
  -	Added the structure to store a song for future processing and possibilities for different songs
  -	Added a test song
  -	Added an LED to show when a song has been fully processed into a waveform
  -	Tested on DE1-SoC board
    -	Everything ran well
  -	Added ability to change volume of song with keys
  -	Added flags to allow for keys to play/pause song and restart (clear the queue)  
  -	Fixed the issue of double notes when stopping in the middle of processing
  
Difficulties:
  -	Debugging why there was no playback
    -	Intensity was being zeroed out incorrectly
  -	Debugging why the wrong frequency was being played back
    -	Integer division by accident
  -	Thinking of a proper structure to use to allow for constant updating and processing to happen simultaneously
    -	Decided to use a linked list as a queue instead of an array as a queue
    
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
