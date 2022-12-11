// Projeto Dado Digital com Botao
// Matheus Ikenaga
// 17/11/2021

  int s1 = 2;
  int s2 = 3;
  int s3 = 4;
  int s4 = 5;
  int s5 = 6;
  int s6 = 7;
  int s7 = 8;
  int botao = 9;
  int input  = A0;
  bool estadoBotao = 0;


void setup() {
  pinMode (s1,OUTPUT);
  pinMode (s2,OUTPUT);
  pinMode (s3,OUTPUT);
  pinMode (s4,OUTPUT);
  pinMode (s5,OUTPUT);
  pinMode (s6,OUTPUT);
  pinMode (s7,OUTPUT);
  pinMode (botao, INPUT_PULLUP);

}

void loop() {
  if (digitalRead(botao)==LOW){
    estadoBotao = !estadoBotao;
    int number = (analogRead(input)%6);
    result(number+1);
    while(digitalRead(botao) == LOW);
    delay(100);
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
