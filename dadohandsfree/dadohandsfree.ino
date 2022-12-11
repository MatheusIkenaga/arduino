// Projeto Dado Digital com Botao
// Matheus Ikenaga
// 17/11/2021

/* Position of LEDs:
 *  ==========
 *  |s1----s5|
 *  |s2-s4-s6|
 *  |s3----s7|
 *  ==========
 */

  int s1 = 2;
  int s2 = 3;
  int s3 = 4;
  int s4 = 5;
  int s5 = 6;
  int s6 = 7;
  int s7 = 8;
  int pinoSensorLuz  = A0;
  int valorLuz = 0;

void setup() {
  pinMode (s1,OUTPUT);
  pinMode (s2,OUTPUT);
  pinMode (s3,OUTPUT);
  pinMode (s4,OUTPUT);
  pinMode (s5,OUTPUT);
  pinMode (s6,OUTPUT);
  pinMode (s7,OUTPUT);
}

void loop() {
  valorLuz = analogRead(pinoSensorLuz);
  if (valorLuz < 450)
  {
    for( int x =1; x < random(5,10); x++){
      int number = (analogRead(pinoSensorLuz)%6);
      result(number+1);
      delay(200);
    }
    int number = (analogRead(pinoSensorLuz)%6);
    result(number+1);
    delay(500);
    while (analogRead(pinoSensorLuz) > 1023);
  }
}

void apagaTodos() {
  digitalWrite(s1,LOW);
  digitalWrite(s2,LOW);
  digitalWrite(s3,LOW);
  digitalWrite(s4,LOW);
  digitalWrite(s5,LOW);
  digitalWrite(s6,LOW);
  digitalWrite(s7,LOW);
}

void result(int x) {
  if (x == 1) {
    apagaTodos();
    digitalWrite(s4,HIGH);
  }
  if (x == 2) {
    apagaTodos();
    digitalWrite(s3,HIGH);
    digitalWrite(s5,HIGH);
  }
  if (x == 3) {
    apagaTodos();
    digitalWrite(s3,HIGH);
    digitalWrite(s4,HIGH);
    digitalWrite(s5,HIGH);
  }
  if (x == 4) {
    apagaTodos();
    digitalWrite(s1,HIGH);
    digitalWrite(s3,HIGH);
    digitalWrite(s5,HIGH);
    digitalWrite(s7,HIGH);
  }
  
  if (x == 5) {
    apagaTodos();
    digitalWrite(s1,HIGH);
    digitalWrite(s3,HIGH);
    digitalWrite(s4,HIGH);
    digitalWrite(s5,HIGH);
    digitalWrite(s7,HIGH);
  }
  
  if (x == 6) {
    apagaTodos();
    digitalWrite(s1,HIGH);
    digitalWrite(s2,HIGH);
    digitalWrite(s3,HIGH);
    digitalWrite(s5,HIGH);
    digitalWrite(s6,HIGH);
    digitalWrite(s7,HIGH);
  }
  
}
