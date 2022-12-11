#include <Servo.h>

Servo servo;

int pinoPot = A0;
int valorPot;

void setup() {
  servo.attach(9);
}

void loop() {
  valorPot = analogRead(pinoPot);
  valorPot = map(valorPot, 0,1023,0,180);
  servo.write(valorPot);
  delay(15);
}
