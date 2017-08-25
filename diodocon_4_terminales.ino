int LED_1_G = 6;
int LED_1_R = 5;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(LED_1_G, OUTPUT);
  pinMode(LED_1_R, OUTPUT);
}//end setup

void loop() {
  detector1();
}//end loop

void rgb1(int r, int g) {
  analogWrite(LED_1_G, g);
  analogWrite(LED_1_R, r);
}//end rgb1
void detector1() {
  int lectura = analogRead(A0);
  if (lectura != 0) {
    Serial.println(lectura);
    rgb1(255, 0);
  } else {
    rgb1(0, 255);
    Serial.println(lectura);
  }//end if else
}//end detector1
