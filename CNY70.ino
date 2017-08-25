int LED_1_G = 1;
int LED_1_R = 0;

void setup() {
  /**
  ** Frecuencia en baudios
  ** que manejaremos en el promgrama
  **/
  Serial.begin(9600);
  /**
  ** Configuracion de los diodos led
  **/
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(LED_4, OUTPUT);
  pinMode(LED_5, OUTPUT);
  pinMode(LED_6, OUTPUT);
  /*Configuracion de CNY70
    para el ingreso de los datos*/
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
  pinMode(A2, INPUT);
  pinMode(A3, INPUT);
  pinMode(A4, INPUT);
  pinMode(A5, INPUT);

}//end setup

void loop() {
  detector1();
  detector2();
  detector3();
  detector4();
  detector5();
  detector6();
  //delay(10);
}//end loop

/**
** funciones del detector de colores
** si es diferente de 0 entonces la pieza a sido
** colocada exitosamente.
**/
void detector1() {
  int lectura = analogRead(A0);
  if (lectura != 0) {
    rgb(int r, int g);
  } else {
    digitalWrite(LED_1, LOW);
  }//end if else
}//end detector1

void detector2() {
  int lectura = analogRead(A1);
  if (lectura != 0) {
    digitalWrite(LED_2, HIGH);
  } else {
    digitalWrite(LED_2, LOW);
  }//end if else
}//end detector2

void detector3() {
  int lectura = analogRead(A2);
  if (lectura != 0) {
    digitalWrite(LED_3, HIGH);
  } else {
    digitalWrite(LED_3, LOW);
  }//end if else
}//end detector3

void detector4() {
  int lectura = analogRead(A3);
  if (lectura != 0) {
    digitalWrite(LED_4, HIGH);
  } else {
    digitalWrite(LED_4, LOW);
  }//end if else
}//end detector4

void detector5() {
  int lectura = analogRead(A4);
  if (lectura != 0) {
    digitalWrite(LED_5, HIGH);
  } else {
    digitalWrite(LED_5, LOW);
  }//end if else
}//end detector5

void detector6() {
  int lectura = analogRead(A5);
  if (lectura != 0) {
    digitalWrite(LED_6, HIGH);
  } else {
    digitalWrite(LED_6, LOW);
  }//end if else
}//end detector1

void rgb(int r, int g) {
 // analogWrite(LED_1_B, b);
  analogWrite(LED_1_G, g);
  analogWrite(LED_1_R, r);
}
