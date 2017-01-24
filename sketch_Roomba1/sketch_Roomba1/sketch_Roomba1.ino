  #include<SoftwareSerial.h>

//pin assignment

int rxPin = 10; // from arduino  pin 10 to roomba pin 3
int txPin = 11; // from srduino pin 11 to roomba pin 4
int ddPin = 5; // from srduino pin 5 to roomba pin 5

SoftwareSerial cereal(rxPin, txPin);

void setup() {
  Serial.begin(9600);
  delay(3000);
  Serial.println("Your uncle is a monkey");

  pinMode (ddPin, OUTPUT);
  //pinMode (rxPin, );
  //pinMode (txPin, );
  
  cereal.begin(19200);
  
  delay(100);
  
  if (cereal.available()){
    Serial.println(cereal.read());
  } else {
    Serial.println("Cereal failed");
  }
  
  digitalWrite(ddPin, HIGH);
  delay(100);
  digitalWrite(ddPin, LOW);
  delay(500);
  digitalWrite(ddPin, HIGH);
  delay(2000);

  // Safe mode
  
  cereal.write(128); //start

  delay(1000);

  cereal.write(7);

  delay(1000);

  cereal.write(128);

  delay(1000);

  cereal.write(135); //enter safe mode

  Serial.println("So we know it got here");

  delay(1000);
  
  // full mode
  /*
  cereal.write(130);

  delay(10);

  cereal.write(132);

  delay(10);
  */

  //cereal.write(143); // return to dock
  
  
  //Spin till you drop
  //spinTillYouDrop();
}



void loop() {
  // put your main code here, to run repeatedly:

}

void spinTillYouDrop(){
  Serial.print("It got here too");
  
  cereal.write(145); 
  cereal.write(0xff);   
  cereal.write(0x38);
  cereal.write(byte(00));
  cereal.write(0xc8);
  }
