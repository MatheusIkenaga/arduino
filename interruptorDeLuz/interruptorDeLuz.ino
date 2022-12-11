// Programa: Interruptor de Luz
// Matheus Ikenaga
// 2021-11-15

int botao      = 7;
int led        = 13;
bool estadoLed = 0;

void setup() {
  pinMode (botao, INPUT_PULLUP); //Define botao como entrada INPUT
  pinMode(led,OUTPUT);
}

void loop() {
  if (digitalRead(botao) == LOW){
    estadoLed = !estadoLed;
    digitalWrite(led, estadoLed);
    while(digitalRead(botao) == LOW);
    delay(100);
  }
}
