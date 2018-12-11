// Adafruit Circuit Playground - Theme Song    Support Open Source, buy at Adafruit
//   2016-08-12 Version 1  by Mike Barela for Adafruit Industries

#include <Adafruit_CircuitPlayground.h>
#include "pitches.h"

int mario_melody[] = {                            // specific notes in the melody
NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0,  0,
  NOTE_G6, 0, 0, 0,
 
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
 
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,
 
  NOTE_C7, 0, 0, NOTE_G6,
  0, 0, NOTE_E6, 0,
  0, NOTE_A6, 0, NOTE_B6,
  0, NOTE_AS6, NOTE_A6, 0,
 
  NOTE_G6, NOTE_E7, NOTE_G7,
  NOTE_A7, 0, NOTE_F7, NOTE_G7,
  0, NOTE_E7, 0, NOTE_C7,
  NOTE_D7, NOTE_B6, 0, 0,  

  0, 0, NOTE_G7, NOTE_FS7,
  NOTE_F7,NOTE_DS7, 0, NOTE_E7,
  0, NOTE_GS6, NOTE_A6, NOTE_C7,
  0, NOTE_A6, NOTE_C7, NOTE_D7,

  0, 0, NOTE_G7, NOTE_FS7,
  NOTE_F7,NOTE_DS7, 0, NOTE_E7,
  0, NOTE_C8, 0, NOTE_C8, 
  NOTE_C8, 0, NOTE_G6, 0,

  0, 0, NOTE_G7, NOTE_FS7,
  NOTE_F7,NOTE_DS7, 0, NOTE_E7,
  0, NOTE_GS6, NOTE_A6, NOTE_C7,
  0, NOTE_A6, NOTE_C7, NOTE_D7,

  0, 0, NOTE_DS7, 0,
  0, NOTE_D7, 0, 0,
  NOTE_C6, 0, 0, NOTE_G6,
  NOTE_G6, 0, NOTE_C5,

  0, 0, NOTE_G7, NOTE_FS7,
  NOTE_F7,NOTE_DS7, 0, NOTE_E7,
  0, NOTE_GS6, NOTE_A6, NOTE_C7,
  0, NOTE_A6, NOTE_C7, NOTE_D7,

  0, 0, NOTE_G7, NOTE_FS7,
  NOTE_F7,NOTE_DS7, 0, NOTE_E7,
  0, NOTE_C8, 0, NOTE_C8, 
  NOTE_C8, 0, NOTE_C6, 0,
   
  0, 0, NOTE_G7, NOTE_FS7,
  NOTE_F7,NOTE_DS7, 0, NOTE_E7,
  0, NOTE_GS6, NOTE_A6, NOTE_C7,
  0, NOTE_A6, NOTE_C7, NOTE_D7,

  0, 0, NOTE_DS7, 0,
  0, NOTE_D7, 0, 0,
  NOTE_C7, 0, 0, NOTE_G6,
  NOTE_G6, 0, NOTE_C6,

  NOTE_C7, NOTE_C7, 0, NOTE_C7,
  0, NOTE_C6, NOTE_D7, 0,
  NOTE_E6, NOTE_C7, 0, NOTE_A5,
  NOTE_G5, 0, NOTE_C5, 0,

  NOTE_C7, NOTE_C7, 0, NOTE_C7,
  0, NOTE_C7, NOTE_D7, NOTE_E7,
  NOTE_C6, 0, 0, NOTE_E5,
  0, 0, NOTE_C5, 0,

  NOTE_C7, NOTE_C7, 0, NOTE_C7,
  0, NOTE_C7, NOTE_D7, 0,
  NOTE_E7, NOTE_C7, 0, NOTE_A6,
  NOTE_G6, 0, NOTE_C5, 0,

  NOTE_E7, NOTE_E7, 0, NOTE_E7,
  0, NOTE_C7, NOTE_E7, 0,
  NOTE_G7, 0, 0, 0,
  NOTE_G6, 0, 0, 0};
int mario_numNotes = 240; // Number of notes in the melody

int mario_noteDurations[] = {     // note durations
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
 
  9, 9, 9,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,

  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
  12, 12, 12, 12,
};

int sad_melody[] = {                            // specific notes in the melody
  0, 0, NOTE_D4, NOTE_CS4, 
  NOTE_B5, NOTE_FS4, NOTE_FS4, NOTE_FS4, 
  NOTE_FS4, NOTE_FS4, NOTE_FS4, NOTE_B5, 
  NOTE_B5, NOTE_B5, NOTE_B5, NOTE_A4, 

  NOTE_B5,NOTE_G4, NOTE_G4, NOTE_G4, 
  NOTE_G4, NOTE_G4, NOTE_B5, NOTE_B5, 
  NOTE_B5, NOTE_B5, NOTE_B5, NOTE_CS5, 
  NOTE_D5,NOTE_A4, NOTE_A4, NOTE_A4, 

  NOTE_A4, NOTE_A4, NOTE_A4, NOTE_D5, 
  NOTE_D5, NOTE_D5, NOTE_D5, NOTE_E5,
  NOTE_E5, NOTE_CS5, NOTE_D5, NOTE_CS5, 
  NOTE_B5, NOTE_FS4};

const int sad_numNotes = 46;                     // number of notes we are playing
int sad_noteDurations[] = {     // note durations: 4 = quarter note, 8 = eighth note, etc.:
 4, 4, 4, 4, 8, 8, 16, 16, 16, 16,16,16,16,16,8,16,8,6,16,16,16,16,16,16,16,16,8,16,8,6,16,16,16,16,16,16,16,16,8,16,8,6,4,4,8,8 };


int take_on_melody[] = {                  //each line = 1 measure
  NOTE_FS7, NOTE_FS7, NOTE_D7, NOTE_B6, 0, NOTE_B6, 0, NOTE_E7,
  0, NOTE_E7, 0, NOTE_E7, NOTE_GS7, NOTE_GS7, NOTE_A7, NOTE_B7,
  NOTE_A7, NOTE_A7, NOTE_A7, NOTE_E7, 0, NOTE_D7, 0, NOTE_FS7,
  0, NOTE_FS7, 0, NOTE_FS7, NOTE_E7, NOTE_E7, NOTE_FS7, NOTE_E7,
  
  NOTE_FS7, NOTE_FS7, NOTE_D7, NOTE_B6, 0, NOTE_B6, 0, NOTE_E7,
  0, NOTE_E7, 0, NOTE_E7, NOTE_GS7, NOTE_GS7, NOTE_A7, NOTE_B7,
  NOTE_A7, NOTE_A7, NOTE_A7, NOTE_E7, 0, NOTE_D7, 0, NOTE_FS7,
  0, NOTE_FS7, 0, NOTE_FS7, NOTE_E7, NOTE_E7, NOTE_FS7, NOTE_E7,
  
  NOTE_FS7, NOTE_FS7, NOTE_D7, NOTE_B6, 0, NOTE_B6, 0, NOTE_E7,
  0, NOTE_E7, 0, NOTE_E7, NOTE_GS7, NOTE_GS7, NOTE_A7, NOTE_B7,
  NOTE_A7, NOTE_A7, NOTE_A7, NOTE_E7, 0, NOTE_D7, 0, NOTE_FS7,
  0, NOTE_FS7, 0, NOTE_FS7, NOTE_E7, NOTE_E7, NOTE_FS7, NOTE_E7,

  NOTE_D6, NOTE_D6, 0, NOTE_CS6, NOTE_B5,
  0,
  NOTE_CS6, NOTE_CS6, 0, NOTE_CS6, 0, NOTE_A5, 0,
  0, NOTE_FS6, 0, NOTE_FS6, NOTE_FS6, NOTE_E6,
  NOTE_D6, NOTE_D6, NOTE_D6, NOTE_CS6, 0, NOTE_B5,
};

const int take_on_numNotes = 121;
int take_on_noteDurations[] = {
  8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,

  8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,

  8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,
  8,8,8,8,8,8,8,8,


};

int megalo_melody[] ={
  
}
void setup() {
  CircuitPlayground.begin();              // initialize the CP library
}
void loop() {
  if(CircuitPlayground.rightButton()) {   // play when we press the right button
    for (int thisNote = 0; thisNote < numNotes; thisNote++) { // play notes of the melody
      // to calculate the note duration, take one second divided by the note type.
      int noteDuration = 1000 / noteDurations[thisNote];
      CircuitPlayground.playTone(melody[thisNote], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      //   the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);
    }
  }
}
