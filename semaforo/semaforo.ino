// Programa: Semaforo
// Matheus Ikenaga
// 2021-11-15

int carRed      = 12;
int carYellow   = 11;
int carGreen    = 10;

int pedRed      = 9;
int pedGreen    = 8;

void setup() {
  pinMode(carRed,OUTPUT);
  pinMode(carYellow,OUTPUT);
  pinMode(carGreen,OUTPUT);
  pinMode(pedRed,OUTPUT);
  pinMode(pedGreen,OUTPUT);

  digitalWrite(carGreen, HIGH);
  digitalWrite(pedRed, HIGH);
}

void loop() {
  // CARRO - VERDE
  digitalWrite(carGreen, HIGH);
  digitalWrite(pedRed, HIGH);
  delay(5000);

  //CARRO - AMARELO
  digitalWrite(carGreen, LOW);
  digitalWrite(carYellow, HIGH);
  delay(3000);

  //CARRO - VERMELHO

  //1 Seg
  //2 Seg
  digitalWrite(carRed, HIGH);
  digitalWrite(carYellow, LOW);
  digitalWrite(pedGreen, HIGH);
  digitalWrite(pedRed, LOW);
  delay(2000);

  //3 Seg
  //4 Seg
  //5 Seg
  
  digitalWrite(pedGreen, LOW);
  for(int x=0;x<4;x++)
  {
    digitalWrite(pedRed, HIGH);
    delay(500);
    digitalWrite(pedRed, LOW);
    delay(500);
  }
  digitalWrite(carRed, LOW);
}
