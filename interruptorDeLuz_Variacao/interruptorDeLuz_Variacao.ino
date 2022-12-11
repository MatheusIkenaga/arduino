// Programa: Interruptor de Luz
// Matheus Ikenaga
// 2021-11-15

int botaoON      = 7;
int botaoOFF     = 6;

int led        = 13;
bool estadoLed = 0;

void setup() {
  pinMode (botaoON, INPUT_PULLUP); //Define botao como entrada INPUT
  pinMode (botaoOFF, INPUT_PULLUP); //Define botao como entrada INPUT
  pinMode(led,OUTPUT);
}

void loop() {
  if (digitalRead(botaoON) == LOW){
    estadoLed = 1;
    digitalWrite(led, estadoLed);
    while(digitalRead(botaoOFF) == LOW);
    delay(100);
  }

  if (digitalRead(botaoOFF) == LOW){
    estadoLed = 0;
    digitalWrite(led, estadoLed);
    while(digitalRead(botaoON) == LOW);
    delay(100);
  }
}
