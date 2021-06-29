 #include <SoftwareSerial.h>

SoftwareSerial mySerial(10, 11); // RX, TX

char input;

void setup() {
  Serial.begin(9600);  
  
  mySerial.begin(9600);
}

void loop() { // run over and over
  
  while(mySerial.available()){
    input = mySerial.read();
    Serial.print(input);
  }

  while(Serial.available()){
   input = Serial.read();
   mySerial.print(input);
   input++;
   delay(5); 
  }

}
