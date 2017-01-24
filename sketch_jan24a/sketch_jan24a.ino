const int switchPin = 3;

const int led1=11;
const int led2=12;

void setup() {
  
pinMode(switchPin, INPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);


}

void loop() {
 int switchVal = digitalRead(switchPin);

 if (switchVal == HIGH) {
  digitalWrite(led1, HIGH);
  delay(500);
  digitalWrite(led1, LOW);
  delay(500);
  
 } else {
  digitalWrite(led2, HIGH);
  delay(500);
  digitalWrite(led2, LOW);
  delay(500);
  
 }

 

}
