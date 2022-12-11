// Programa: Brilho do LED
// Matheus Ikenaga
// 2021-11-15


int pinoLed = 11;

void setup() {
  pinMode(pinoLed,OUTPUT);
}

void loop() {
  acendeBrilho(5);
  apagaBrilho(5);
}

void acendeBrilho (int incremento) {
  for (byte value=0; value <255; value += incremento){
    analogWrite(pinoLed, value);
    delay(30);
  }
}

void apagaBrilho (int decremento) {
  for (byte value=255; value > 0; value -= decremento){
    analogWrite(pinoLed, value);
    delay(30);
  }
}
