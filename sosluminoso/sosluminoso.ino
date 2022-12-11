// Programa: SOS luminoso
// Matheus Ikenaga
// 2021-11-15


int pinoLed = 11;

void setup() {
  pinMode(pinoLed,OUTPUT);
}

void loop() {

  //S (...)
  for (int x = 0; x<3; x++)
  {
    digitalWrite(11, HIGH);
    delay(150);
    digitalWrite(11, LOW);
    delay(300);
  }

  //S (...)
  for (int x = 0; x<3; x++)
  {
    digitalWrite(11, HIGH);
    delay(450);
    digitalWrite(11, LOW);
    delay(300);
  }

  //S (...)
  for (int x = 0; x<3; x++)
  {
    digitalWrite(11, HIGH);
    delay(150);
    digitalWrite(11, LOW);
    delay(300);
  }

  delay(2000);

}
