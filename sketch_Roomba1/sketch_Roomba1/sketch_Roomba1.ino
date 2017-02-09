  #include<SoftwareSerial.h>

//pin assignment

//ground to 7/6

int txPin = 11; // from arduino  pin 10 to roomba pin 3
int rxPin = 10; // from srduino pin 11 to roomba pin 4
int ddPin = 5; // from srduino pin 5 to roomba pin 5

SoftwareSerial cereal(txPin, rxPin);

void setup() {
  Serial.begin(9600);
  delay(3000);
  Serial.println("Your uncle is a monkey");

  pinMode (ddPin, OUTPUT);
  //pinMode (txPin, );
  //pinMode (rxPin, );
  
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

  cereal.write(131); //enter safe mode

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
  
  forwards();
  delay(2000);
  spinR();
  delay(500);
  spinL();
  forwards();
  delay(6000);
  spinL();
  delay(500);
  wheelStop();
  //Spin till you drop
  //spinTillYouDrop();
}



void loop() {
  // put your main code here, to run repeatedly:

}

void spinTillYouDrop(){
  Serial.print("Spin till you drop");
  
  cereal.write(145); 
  cereal.write(0xff);   
  cereal.write(0x38);
  cereal.write(byte(00));
  cereal.write(0xc8);
  }

void forwards(){
  Serial.print("Forwards");
  
  cereal.write(145); 
  cereal.write(byte(1));   
  cereal.write(byte(116));
  cereal.write(byte(1));
  cereal.write(byte(116));
  }

void spinR(){
  Serial.print("spinR");
  
  cereal.write(145); 
  cereal.write(0xff);   
  cereal.write(0x38);
  cereal.write(byte(00));
  cereal.write(0xc8);
  }

void spinL(){
  Serial.print("spinL");
  
  cereal.write(145); 
  cereal.write(byte(00));
  cereal.write(0xc8);
  cereal.write(0xff);   
  cereal.write(0x38);
  }

void wheelStop(){
  Serial.print("spinL");
  
  cereal.write(145); 
  cereal.write(byte(00));
  cereal.write(byte(00));
  cereal.write(byte(00));   
  cereal.write(byte(00));
  }
