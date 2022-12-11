
#define botao 5
#define luz 7

bool estado_botao = false;

void setup() {
  pinMode(luz, OUTPUT);
  pinMode(botao, INPUT_PULLUP);

  digitalWrite(luz, HIGH);
}

void loop() {
  if(digitalRead(botao) == 0){
    delay(100);
    estado_botao = !estado_botao;
    digitalWrite(luz,estado_botao);

    delay(500);
  }
}
