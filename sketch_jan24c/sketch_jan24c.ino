const int sensorR=0;
const int sensorG=1;
const int sensorB=2;

const int bluePin=10;
const int greenPin=11;
const int redPin=12;

int redVal;
int grnVal;
int bluVal;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  

}

void loop() {
  redVal = analogRead(sensorR);
  bluVal = analogRead(sensorB);
  grnVal = analogRead(sensorG);
  
  redVal = map(redVal, 0, 1023, 0, 255);
  bluVal = map(bluVal, 0, 1023, 0, 255);
  grnVal = map(grnVal, 0, 1023, 0, 255);

  analogWrite(redPin, redVal);
  analogWrite(bluePin, bluVal);
  analogWrite(greenPin, grnVal);
  
}
