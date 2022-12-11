// Programa: Sensor de luz ambiente
// Matheus Ikenaga
// 2021-11-15

int pinoLed        = 13;
int pinoSensorLuz  = A0;
int valorLuz       = 0;


void setup() {
  pinMode(pinoLed,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  valorLuz = analogRead(pinoSensorLuz);
  Serial.println(valorLuz);
  if (valorLuz <600)
  {
    digitalWrite(pinoLed, HIGH);
  } else {
    digitalWrite(pinoLed, LOW);
  }
  delay(10);
}
