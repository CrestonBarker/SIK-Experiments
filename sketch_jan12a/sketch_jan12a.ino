
const int ledPins[] = {8,9,10,11,12,13};


void setup() {
   int index;

  for(index = 0; index <= 5; index++){
    pinMode(ledPins[index], OUTPUT);
  }

}

void loop() {
  for(int i = 0; i < 5; i++){
 oneAfterAnother();
  }
  for(int i = 0; i < 5; i++){
 oneAfterAnotherRevOff();
  }
 for(int i = 0; i < 5; i++){
 oneAtATime();
 }
 for(int i = 0; i < 5; i++){
 //pattern();
 runner();
 }
}

void oneAfterAnotherRevOff() {
   
  int delayTime = 100;
  
  for(int index = 0; index <= 5; index++) {
  digitalWrite(ledPins[index], HIGH);
  delay(delayTime);
  }
  
  for(int index = 0; index <= 5; index++) {
  digitalWrite(ledPins[index], LOW);
  delay(delayTime);
  }
}

void oneAfterAnother() {
   
  int delayTime = 100;
  
  for(int index = 0; index <= 5; index++) {
  digitalWrite(ledPins[index], HIGH);
  delay(delayTime);
  }
  
  for(int index = 5; index >= 0; index--) {
  digitalWrite(ledPins[index], LOW);
  delay(delayTime);
  }
}

void oneAtATime() {
   
  int delayTime = 100;
  
  for(int index = 0; index <= 5; index++) {
  digitalWrite(ledPins[index], HIGH);
  delay(delayTime);
  digitalWrite(ledPins[index], LOW);
  }
  
}



void runner() {
   
  int shortDelay = 100;
  for(int index = 0;index <= 2; index++){
  digitalWrite(ledPins[index], HIGH);
  digitalWrite(ledPins[index+3], HIGH);
  delay(shortDelay);
   digitalWrite(ledPins[index], LOW);
  digitalWrite(ledPins[index+3], LOW);
  delay(shortDelay);
  }
  }
