int ledPin1 = 8;
int ledPin2 = 9;
int infrapin = 4;
int valorInfra = 0;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(infrapin, INPUT);
}//end setup

void loop() {
  valorInfra = digitalRead(infraPin);
  digitalWrite(ledPin1, valorInfra);
  valorInfra = !valorInfra;
  digitalWrite(ledPin2, valorInfra);
}//end loop
