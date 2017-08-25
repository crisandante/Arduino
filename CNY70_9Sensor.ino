int LED_1_G = 2;
int LED_1_R = 3;
int LED_2_G = 4;
int LED_2_R = 5;
int LED_3_G = 6;
int LED_3_R = 7;
int LED_4_G = 8;
int LED_4_R = 9;
int LED_5_G = 10;
int LED_5_R = 11;
int LED_6_G = 12;
int LED_6_R = 13;
int LED_7_G = 14;
int LED_7_R = 15;
int LED_8_G = 16;
int LED_8_R = 17;
int LED_9_G = 18;
int LED_9_R = 19;

void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);
  pinMode(A6, INPUT);
  pinMode(A7, INPUT);
  pinMode(A8, INPUT);
  pinMode(A9, INPUT);
  pinMode(LED_1_R, OUTPUT);
  pinMode(LED_1_G, OUTPUT);
  pinMode(LED_2_R, OUTPUT);
  pinMode(LED_2_G, OUTPUT);
  pinMode(LED_3_R, OUTPUT);
  pinMode(LED_3_G, OUTPUT);
  pinMode(LED_4_R, OUTPUT);
  pinMode(LED_4_G, OUTPUT);
  pinMode(LED_5_R, OUTPUT);
  pinMode(LED_5_G, OUTPUT);
  pinMode(LED_6_R, OUTPUT);
  pinMode(LED_6_G, OUTPUT);
  pinMode(LED_7_R, OUTPUT);
  pinMode(LED_7_G, OUTPUT);
  pinMode(LED_8_R, OUTPUT);
  pinMode(LED_8_G, OUTPUT);
  pinMode(LED_9_R, OUTPUT);
  pinMode(LED_9_G, OUTPUT);
}//end setup

void loop() {
  detector1();
  detector2();
  detector3();
  detector4();
  detector5();
  detector6();
  detector7();
  detector8();
  detector9();

}//end loop

void detector1() {
  int lectura = analogRead(A0);
  if (lectura != 0) {
   // Serial.println(lectura);
    rgb1(255, 0);
    //lectura=0;
  } else {
    rgb1(0, 255);
    //Serial.println(lectura);
  }//end if else
}//end detector1

void detector2() {
  int lectura = analogRead(A1);
  if (lectura != 0) {
    //Serial.println(lectura);
    rgb2(255, 0);
    //lectura=0;
  } else {
    rgb2(0, 255);
    //Serial.println(lectura);
  }//end if else
}//end detector2

void detector3() {
  int lectura = analogRead(A2);
  if (lectura != 0) {
    //Serial.println(lectura);
    rgb3(255, 0);
    //lectura=0;
  } else {
    rgb3(0, 255);
    //Serial.println(lectura);
  }//end if else
}//end detector3

void detector4() {
  int lectura = analogRead(A3);
  if (lectura != 0) {
    //Serial.println(lectura);
    rgb4(255, 0);
    //lectura=0;
  } else {
    rgb4(0, 255);
    //Serial.println(lectura);
  }//end if else
}//end detector4

void detector5() {
  int lectura = analogRead(A4);
  if (lectura != 0) {
    //Serial.println(lectura);
    rgb5(255, 0);
    lectura=0;
  } else {
    rgb5(0, 255);
    Serial.println(lectura);
  }//end if else
}//end detector5

void detector6() {
  int lectura = analogRead(A5);
  if (lectura != 0) {
    //Serial.println(lectura);
    rgb6(255, 0);
    //lectura=0;
  } else {
    rgb6(0, 255);
    //Serial.println(lectura);
  }//end if else
}//end detector6

void detector7() {
  int lectura = analogRead(A6);
  if (lectura != 0) {
    //Serial.println(lectura);
    rgb7(255, 0);
    //lectura=0;
  } else {
    rgb7(0, 255);
    //Serial.println(lectura);
  }//end if else
}//end detector7

void detector8() {
  int lectura = analogRead(A7);
  if (lectura != 0) {
    //Serial.println(lectura);
    rgb8(255, 0);
    //lectura=0;
  } else {
    rgb8(0, 255);
    //Serial.println(lectura);
  }//end if else
}//end detector6

void detector9() {
  int lectura = analogRead(A8);
  if (lectura != 0) {
   // Serial.println(lectura);
    rgb9(255, 0);
    //lectura=0;
  } else {
    rgb9(0, 255);
    //Serial.println(lectura);
  }//end if else
}//end detector6}

void rgb1(int r, int g) {
  analogWrite(LED_1_G, g);
  analogWrite(LED_1_R, r);
}//end rgb1

void rgb2(int r, int g) {
  analogWrite(LED_2_G, g);
  analogWrite(LED_2_R, r);
}//end rgb2

void rgb3(int r, int g) {
  analogWrite(LED_3_G, g);
  analogWrite(LED_3_R, r);
}//end rgb3

void rgb4(int r, int g) {
  analogWrite(LED_4_G, g);
  analogWrite(LED_4_R, r);
}//end rgb4

void rgb5(int r, int g) {
  analogWrite(LED_5_G, g);
  analogWrite(LED_5_R, r);
}//end rgb5

void rgb6(int r, int g) {
  analogWrite(LED_6_G, g);
  analogWrite(LED_6_R, r);
}//end rgb6

void rgb7(int r, int g) {
  analogWrite(LED_7_G, g);
  analogWrite(LED_7_R, r);
}//end rgb7

void rgb8(int r, int g) {
  analogWrite(LED_8_G, g);
  analogWrite(LED_8_R, r);
}//end rgb8

void rgb9(int r, int g) {
  analogWrite(LED_9_G, g);
  analogWrite(LED_9_R, r);
}//end rgb9

