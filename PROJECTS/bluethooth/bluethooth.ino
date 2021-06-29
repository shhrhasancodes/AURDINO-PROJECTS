
int state = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  state= 0;
  while(Serial.available())
  {
    char input = Serial.read();
    Serial.print(input);
    input++;
    delay(5);  
  }

}
