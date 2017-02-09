const int buzzerPin = 9;

const int songLength = 18;

char notes[] = "yyyyx yyyyyyx yyyyyyx";

int beats [] = {1,1,1,1,1,1,1,4,4,1,1,1,1,1,4,4,1,1,1,1,1};

int tempo = 150;

void setup() {
  pinMode(buzzerPin, OUTPUT);
}

void loop() {
  int i, dur;

  for (i = 0; i < songLength; i++){
    dur = beats[i] * tempo;

    if (notes[i] == ' '){
      delay(dur);
    } else {
      tone(buzzerPin, frequency(notes[i]), dur);
      delay(dur);
    }
    delay(tempo/10);
  }
}

int frequency(char note){
  int i;
  const int numNotes = 8;

  char names[] = { 'y', 'x', 'c', 'd', 'e', 'f', 'g', 'a', 'b', 'C' };
  int frequencies[] = {80, 200, 262, 294, 330, 349, 392, 440, 494, 523};

  for (i = 0; i < numNotes; i++)  // Step through the notes
  {
    if (names[i] == note)         // Is this the one?
    {
      return(frequencies[i]);     // Yes! Return the frequency
    }
  }
  return(0);
}

