// GROUP I
// MOIZ FAKHRUDDIN       EB19102043
// SHAHEER HASAN         EB19102112
// SYED JAFFER SUNNY     EB19102122
// MUHAMMAD KHIZER KHAN  EB19102073
// MARYAM PARVEZ ABBASI  EB19102040


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

int buttonState;         
int buttonState1; 
int buttonState2 ;

void setup() {
  // put your setup code here, to run once:
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
  // put your main code here, to run repeatedly:

  buttonState = digitalRead(button1);
  buttonState1 = digitalRead(button2);
  buttonState2 = digitalRead(button3);
  
  //NOT GATE
  if (buttonState == LOW)
  {
    digitalWrite(ledPin1, HIGH);  
  }
  else
  {
    digitalWrite(ledPin1, LOW);
  }

  // AND Gate
  if (buttonState == HIGH & buttonState1 == HIGH & buttonState2 == HIGH) 
  {
    digitalWrite(ledPin2, HIGH);
  } 
  else 
  {
    digitalWrite(ledPin2, LOW);
  }

   // NAND Gate
  if (!(buttonState == HIGH & buttonState1 == HIGH & buttonState2 == HIGH)) 
  {
    digitalWrite(ledPin3, HIGH);
  } 
  else 
  {
    digitalWrite(ledPin3, LOW);
  }

// OR Gate
  if (buttonState == HIGH | buttonState1 == HIGH | buttonState2 == HIGH) 
  {
    digitalWrite(ledPin4, HIGH);
  } 
  else 
  {
    digitalWrite(ledPin4, LOW);
  }

  // NOR Gate
  if (!(buttonState == HIGH | buttonState1 == HIGH | buttonState2 == HIGH)) 
  {
    digitalWrite(ledPin5, HIGH);
  } 
  else 
  {
    digitalWrite(ledPin5, LOW);
  }

// XOR Gate
  if (buttonState == HIGH ^ buttonState1 == HIGH ^ buttonState2 == HIGH) 
  {
    digitalWrite(ledPin6, HIGH);
  } 
  else 
  {
    digitalWrite(ledPin6, LOW);
  }

  // XNOR Gate
  if (!(buttonState == HIGH ^ buttonState1 == HIGH ^ buttonState2 == HIGH)) 
  {
    digitalWrite(ledPin7, HIGH);
  } 
  else 
  {
    digitalWrite(ledPin7, LOW);
  }
}
