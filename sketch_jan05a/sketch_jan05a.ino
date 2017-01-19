const int RED_PIN =12;

const int GREEN_PIN = 11;

const int BLUE_PIN = 10;

void setup() {
  pinMode(RED_PIN, OUTPUT);
  pinMode(GREEN_PIN, OUTPUT);
  pinMode(BLUE_PIN, OUTPUT);
  
}

void loop() {

mainColors();

}

void mainColors()
{
// Off (all LEDs off):
digitalWrite(RED_PIN, LOW);
digitalWrite(GREEN_PIN, LOW);
digitalWrite(BLUE_PIN, LOW);

//wait 1 second
delay(1000);

// Red (turn just the red LED on):
digitalWrite(RED_PIN, HIGH);
digitalWrite(GREEN_PIN, LOW);
digitalWrite(BLUE_PIN, LOW);

//wait 1 seconds
delay(1000);

// Green (turn just the green LED on):
digitalWrite(RED_PIN, LOW);
digitalWrite(GREEN_PIN, HIGH);
digitalWrite(BLUE_PIN, LOW);

//wait 1 second
delay(1000);

// Blue (turn just the blue LED on):
digitalWrite(RED_PIN, LOW);
digitalWrite(GREEN_PIN, LOW);
digitalWrite(BLUE_PIN, HIGH);

//wait 1 second
delay(1000);

// Yellow (turn red and green on):
digitalWrite(RED_PIN, HIGH);
digitalWrite(GREEN_PIN, HIGH);
digitalWrite(BLUE_PIN, LOW);

//wait 1 second
delay(1000);

// Cyan (turn green and blue on):
digitalWrite(RED_PIN, LOW);
digitalWrite(GREEN_PIN, HIGH);
digitalWrite(BLUE_PIN, HIGH);

//wait 1 second
delay(1000);

// Purple (turn red and blue on):
digitalWrite(RED_PIN, HIGH);
digitalWrite(GREEN_PIN, LOW);
digitalWrite(BLUE_PIN, HIGH);

//wait 1 second
delay(1000);

// White (turn all the LEDs on):
digitalWrite(RED_PIN, HIGH);
digitalWrite(GREEN_PIN, HIGH);
digitalWrite(BLUE_PIN, HIGH);

//wait 1 second
delay(1000);
}
