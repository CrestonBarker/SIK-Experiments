/*
 Darude - Sandstorm

 (c) Jordi Agricola 2014

 Speaker on port 8
 
 */
 #include "pitches.h"

// notes in the melody:

// note durations: 4 = quarter note, 8 = eighth note, etc.:
  
 int shortTone = 80;
 int longTone = 200;
 int standardDelay = 50;
 int delayBetweenBars = 50;

 int switchPin = 10;

 boolean song = false; 

void setup() {
pinMode(switchPin, INPUT);
pinMode(2, OUTPUT);
pinMode(3, OUTPUT);
pinMode(4, OUTPUT);
pinMode(5, OUTPUT);
}

void loop() {

  if (digitalRead(switchPin) == HIGH){
    march();
  } else {
    sandstorm();
  }

  int lightPin = random(2, 6);

  digitalWrite(lightPin, HIGH);
  delay(standardDelay);
  digitalWrite(lightPin, LOW);
  delay(standardDelay);
  
}


void march () {
  tone(8,LA3,Q); 
    delay(1+Q); //delay duration should always be 1 ms more than the note in order to separate them.
    tone(8,LA3,Q);
    delay(1+Q);
    tone(8,LA3,Q);
    delay(1+Q);
    tone(8,F3,E+S);
    delay(1+E+S);
    tone(8,C4,S);
    delay(1+S);
    
    tone(8,LA3,Q);
    delay(1+Q);
    tone(8,F3,E+S);
    delay(1+E+S);
    tone(8,C4,S);
    delay(1+S);
    tone(8,LA3,H);
    delay(1+H);
    
    tone(8,E4,Q); 
    delay(1+Q); 
    tone(8,E4,Q);
    delay(1+Q);
    tone(8,E4,Q);
    delay(1+Q);
    tone(8,F4,E+S);
    delay(1+E+S);
    tone(8,C4,S);
    delay(1+S);
    
    tone(8,Ab3,Q);
    delay(1+Q);
    tone(8,F3,E+S);
    delay(1+E+S);
    tone(8,C4,S);
    delay(1+S);
    tone(8,LA3,H);
    delay(1+H);
    
    tone(8,LA4,Q);
    delay(1+Q);
    tone(8,LA3,E+S);
    delay(1+E+S);
    tone(8,LA3,S);
    delay(1+S);
    tone(8,LA4,Q);
    delay(1+Q);
    tone(8,Ab4,E+S);
    delay(1+E+S);
    tone(8,G4,S);
    delay(1+S);
    
    tone(8,Gb4,S);
    delay(1+S);
    tone(8,E4,S);
    delay(1+S);
    tone(8,F4,E);
    delay(1+E);
    delay(1+E);//PAUSE
    tone(8,Bb3,E);
    delay(1+E);
    tone(8,Eb4,Q);
    delay(1+Q);
    tone(8,D4,E+S);
    delay(1+E+S);
    tone(8,Db4,S);
    delay(1+S);
    
    tone(8,C4,S);
    delay(1+S);
    tone(8,B3,S);
    delay(1+S);
    tone(8,C4,E);
    delay(1+E);
    delay(1+E);//PAUSE QUASI FINE RIGA
    tone(8,F3,E);
    delay(1+E);
    tone(8,Ab3,Q);
    delay(1+Q);
    tone(8,F3,E+S);
    delay(1+E+S);
    tone(8,LA3,S);
    delay(1+S);
    
    tone(8,C4,Q);
    delay(1+Q);
     tone(8,LA3,E+S);
    delay(1+E+S);
    tone(8,C4,S);
    delay(1+S);
    tone(8,E4,H);
    delay(1+H);
    
     tone(8,LA4,Q);
    delay(1+Q);
    tone(8,LA3,E+S);
    delay(1+E+S);
    tone(8,LA3,S);
    delay(1+S);
    tone(8,LA4,Q);
    delay(1+Q);
    tone(8,Ab4,E+S);
    delay(1+E+S);
    tone(8,G4,S);
    delay(1+S);
    
    tone(8,Gb4,S);
    delay(1+S);
    tone(8,E4,S);
    delay(1+S);
    tone(8,F4,E);
    delay(1+E);
    delay(1+E);//PAUSE
    tone(8,Bb3,E);
    delay(1+E);
    tone(8,Eb4,Q);
    delay(1+Q);
    tone(8,D4,E+S);
    delay(1+E+S);
    tone(8,Db4,S);
    delay(1+S);
    
    tone(8,C4,S);
    delay(1+S);
    tone(8,B3,S);
    delay(1+S);
    tone(8,C4,E);
    delay(1+E);
    delay(1+E);//PAUSE QUASI FINE RIGA
    tone(8,F3,E);
    delay(1+E);
    tone(8,Ab3,Q);
    delay(1+Q);
    tone(8,F3,E+S);
    delay(1+E+S);
    tone(8,C4,S);
    delay(1+S);
    
    tone(8,LA3,Q);
    delay(1+Q);
     tone(8,F3,E+S);
    delay(1+E+S);
    tone(8,C4,S);
    delay(1+S);
    tone(8,LA3,H);
    delay(1+H);
    
    delay(2*H);
    
}

void sandstorm () {
   tone(8,  NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_B3, shortTone);
   delay(shortTone);
  noTone(8);
  delay(standardDelay);
tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
  delay(standardDelay);
tone(8,  NOTE_B3, longTone); 
 delay(longTone);
 noTone(8);
 delay(delayBetweenBars);
 
    tone(8,  NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay); 
 tone(8,NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_B3, shortTone);
   delay(shortTone);
  noTone(8);
  delay(standardDelay);
tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
  delay(standardDelay);
tone(8,  NOTE_B3, longTone); 
 delay(longTone);
 noTone(8);
 delay(standardDelay);
 
     tone(8,  NOTE_E4, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay); 
 tone(8,NOTE_E4, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_E4, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_E4, shortTone);
   delay(shortTone);
  noTone(8);
  delay(standardDelay);
tone(8,  NOTE_E4, shortTone);
  delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_E4, shortTone);
 delay(shortTone);
 noTone(8);
  delay(standardDelay);
tone(8,  NOTE_E4, longTone); 
 delay(longTone);
 noTone(8);
 delay(standardDelay);
 
 
     tone(8,  NOTE_D4, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay); 
 tone(8,NOTE_D4, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_D4, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_D4, shortTone);
   delay(shortTone);
  noTone(8);
  delay(standardDelay);
tone(8,  NOTE_D4, shortTone);
  delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_D4, shortTone);
 delay(shortTone);
 noTone(8);
  delay(standardDelay);
tone(8,  NOTE_D4, longTone); 
 delay(longTone);
 noTone(8);
 delay(standardDelay);

tone(8, NOTE_A3, longTone);
delay(longTone);
 noTone(8);
 delay(standardDelay);

 tone(8,  NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_B3, shortTone);
   delay(shortTone);
  noTone(8);
  delay(standardDelay);
tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
  delay(standardDelay);
tone(8,  NOTE_B3, longTone); 
 delay(longTone);
 noTone(8);
 delay(delayBetweenBars);
 
    tone(8,  NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay); 
 tone(8,NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_B3, shortTone);
   delay(shortTone);
  noTone(8);
  delay(standardDelay);
tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
  delay(standardDelay);
tone(8,  NOTE_B3, longTone); 
 delay(longTone);
 noTone(8);
 delay(standardDelay);
 
 tone(8, NOTE_E4, longTone);
 delay(longTone);
 noTone(8);
 delay(standardDelay);

 tone(8,  NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_B3, shortTone);
   delay(shortTone);
  noTone(8);
  delay(standardDelay);
tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
  delay(standardDelay);
tone(8,  NOTE_B3, longTone); 
 delay(longTone);
 noTone(8);
 delay(delayBetweenBars);
 
    tone(8,  NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay); 
 tone(8,NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_B3, shortTone);
   delay(shortTone);
  noTone(8);
  delay(standardDelay);
tone(8,  NOTE_B3, shortTone);
  delay(shortTone);
 noTone(8);
 delay(standardDelay);
 tone(8,  NOTE_B3, shortTone);
 delay(shortTone);
 noTone(8);
  delay(standardDelay);
tone(8,  NOTE_B3, longTone); 
 delay(longTone);
 noTone(8);
 delay(standardDelay);

tone(8, NOTE_E4, longTone); 
 delay(longTone);
 noTone(8);
 delay(standardDelay);
  
}

int light (){
  return(random(0,2));
}

