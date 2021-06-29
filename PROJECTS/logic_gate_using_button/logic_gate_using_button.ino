const int button1 = 2;
const int button2 = 3;
const int button3 = 4;

const int ledPin1 =  6;      
const int ledPin2 =  7;
const int ledPin3 =  8;
const int ledPin4 =  9;
const int ledPin5 =  10;
const int ledPin6 =  11;
const int ledPin7 =  12;

boolean AND;
boolean NAND;
boolean OR; 
boolean NOR;
boolean XOR; 
boolean XNOR;

int buttonState;         
int buttonState1; 
int buttonState2 ; 

void setup() {
  // initialize the LED pin as an output:
  
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
  pinMode(ledPin4, OUTPUT);
  pinMode(ledPin5, OUTPUT);
  pinMode(ledPin6, OUTPUT);
  pinMode(ledPin7, OUTPUT);
  
  // initialize the pushbutton pin as an input:
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  pinMode(button3, INPUT);
}

void loop() {
  // read the state of the pushbutton value:
  buttonState = digitalRead(button1);
  buttonState1 = digitalRead(button2);
  buttonState2 = digitalRead(button3);

  if (buttonState == LOW)
  {
    digitalWrite(ledPin1, HIGH);  
  }
  else
  {
    digitalWrite(ledPin1, LOW);
  }
  AND  = buttonState & buttonState1 & buttonState2 ;
  NAND = !(buttonState & buttonState1 & buttonState2 );
  OR   = buttonState | buttonState1 | buttonState2;
  NOR  = !(buttonState | buttonState1 | buttonState2);
  XOR  = buttonState ^ buttonState1 ^ buttonState2;
  XNOR = !(buttonState ^ buttonState1 ^ buttonState2);

  digitalWrite(ledPin2, AND);
  digitalWrite(ledPin3, NAND);
  digitalWrite(ledPin4, OR);
  digitalWrite(ledPin5, NOR);
  digitalWrite(ledPin6, XOR);
  digitalWrite(ledPin7, XNOR);
}
