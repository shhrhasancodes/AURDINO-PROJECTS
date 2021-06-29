/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED) connected to digital pin 13.
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().
*/

// GROUP I
// MOIZ FAKHRUDDIN       EB19102043
// SHAHEER HASAN         EB19102112
// SYED JAFFER SUNNY     EB19102122
// MUHAMMAD KHIZER KHAN  EB19102073
// MARYAM PARVEZ ABBASI  EB19102040


int sensorPin = A0;    
int ledPin = 13;    

void setup() {
  // declare the ledPin as an OUTPUT:
  pinMode(ledPin, OUTPUT);
}

void loop() {
  // read the value from the sensor:
 int sensorValue = analogRead(sensorPin);
 if(sensorValue <= 200)
 {
  // turn the ledPin on
  digitalWrite(ledPin, HIGH);
 }
 else
 {
  digitalWrite(ledPin, LOW);
 }
}
