/*
  Button

  Turns on and off a light emitting diode(LED) connected to digital pin 13,
  when pressing a pushbutton attached to pin 2.

  The circuit:
  - LED attached from pin 13 to ground
  - pushbutton attached to pin 2 from +5V
  - 10K resistor attached to pin 2 from ground

  - Note: on most Arduinos there is already an LED on the board
    attached to pin 13.

  created 2005
  by DojoDave <http://www.0j0.org>
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Button
*/

// constants won't change. They're used here to set pin numbers:
//const int buttonPin = 2;     // the number of the pushbutton pin
//const int ledPin =  13;  
int p = 2;
int q = 3;
int r = 4;
int s = 5;
int t = 6;
int u = 7;
int v = 8;

int a = 11;
int b = 12;
int c=  13;

// the number of the LED pin

// variables will change:
int buttonState = 0;         // variable for reading the pushbutton status

void setup() {
  // initialize the LED pin as an output:
  pinMode(p, OUTPUT);
  pinMode(q, OUTPUT);
  pinMode(r, OUTPUT);
  pinMode(s, OUTPUT);
  pinMode(t, OUTPUT);
  pinMode(u, OUTPUT);
  pinMode(v, OUTPUT);
  pinMode(a, INPUT);
  pinMode(b, INPUT);
  pinMode(c, INPUT);

  
  // initialize the pushbutton pin as an input:

}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(a);

  // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  if (buttonState == HIGH) {
    // turn LED on:
    digitalWrite(q, HIGH);
  } else {
    // turn LED off:
    digitalWrite(q, LOW);
  }
}
