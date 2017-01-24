const int tempPin = 0;

int tempVal;

float volts;

float tempC;

float tempF;

void setup() {
  serial.begin(9600);
  

}

void loop() {
  tempVal = analogRead(tempPin);

  Serial.print("TempVal = ");
  Serial.print(tempVal);
  Serial.print("* * * * * *");

  volts = tempVal *3.3;
  volts /= 1023.0;

  Serial.
}
