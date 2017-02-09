const int DIR_A = 5;
const int DIR_B = 4;
const int PWM = 6;

const int switchPin = 10;
const int potPin = 0;

void setup() {
  pinMode(DIR_A, OUTPUT);
  pinMode(DIR_B, OUTPUT);
  pinMode(PWM, OUTPUT);

  pinMode(switchPin, INPUT);

}

void loop() {
  int speed = analogRead(potPin) / 4;

 if (digitalRead(switchPin) == HIGH){ 
  forward(speed);
 } else {
  reverse(speed);
 } 
}

void forward(int sp){
  digitalWrite(DIR_A, HIGH);
  digitalWrite(DIR_B, LOW);

  analogWrite(PWM, sp);
}

void reverse(int sp){
  digitalWrite(DIR_A, LOW);
  digitalWrite(DIR_B, HIGH);

  analogWrite(PWM, sp);
}

