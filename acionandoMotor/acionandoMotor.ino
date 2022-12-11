#include <Servo.h>

Servo servo;
int botao = 7;

void setup() {
  pinMode(botao, INPUT_PULLUP);
}

void loop() {
  servo.attach(9);
  if(digitalRead(botao) == LOW) {
    for (int angulo = 0; angulo <= 180; angulo ++){
      servo.write(angulo);
      delay(10);
    }
    for(int angulo = 180; angulo >= 0; angulo --){
      servo.write(angulo);
      delay(10);
    }
  }
  servo.detach();
}
