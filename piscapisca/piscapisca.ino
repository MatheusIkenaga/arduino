// Programa: Pisca-pisca
// Matheus Ikenaga
// 2021-11-15

void setup() {
  pinMode(11,OUTPUT);
}

void loop() {
  //Acende o LED
  digitalWrite(11, HIGH);

  //Aguarda intervalo de tempo em milisegundos
  delay(1000);

  //Apaga o LED
  digitalWrite(11, LOW);

  //Aguarda intervalo de tempo em milisegundos
  delay(1000);
}
