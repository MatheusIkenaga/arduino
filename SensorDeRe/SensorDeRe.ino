//Carrega a biblioteca do sensor ultrassonico
#include <Ultrasonic.h>

//Carrega a biblioteca do RF433
#include <RCSwitch.h>
 
//Define os pinos para o trigger e echo
#define pino_trigger 4
#define pino_echo 5

int green = 8;
int yellow = 9;
int red = 10;

int pinoBuzzer = 6;

 
//Inicializa o sensor nos pinos definidos acima
Ultrasonic ultrasonic(pino_trigger, pino_echo);
 
void setup()
{
  pinMode (green,OUTPUT);
  pinMode (yellow,OUTPUT);
  pinMode (red,OUTPUT);

  pinMode (pinoBuzzer, OUTPUT);
  
  Serial.begin(9600);
  Serial.println("Lendo dados do sensor...");
}
 
void loop()
{
  digitalWrite(pinoBuzzer,LOW);
  //Le as informacoes do sensor, em cm e pol
  float cmMsec;
  long microsec = ultrasonic.timing();
  cmMsec = ultrasonic.convert(microsec, Ultrasonic::CM);
  if (cmMsec > 30){
    acendeVerde();
  } else {
    if(cmMsec > 10 && cmMsec < 30){
      acendeAmarelo();
      apitaAlternado(200);
    } else {
      if(cmMsec < 10){
        acendeVermelho();
        digitalWrite(pinoBuzzer,HIGH);
        delay(1000);
      }
    }
  }
  
  //Exibe informacoes no serial monitor
  Serial.print("Distancia em cm: ");
  Serial.println(cmMsec);
  delay(500);
}

void apitaAlternado(int tempo){
  digitalWrite(pinoBuzzer,HIGH);
  delay(tempo);
  digitalWrite(pinoBuzzer,LOW);
}

void acendeVerde(){
  digitalWrite(green,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
}

void acendeAmarelo(){
  digitalWrite(yellow,HIGH);
  digitalWrite(red,LOW);
  digitalWrite(green,LOW);
}

void acendeVermelho(){
  digitalWrite(red,HIGH);
  digitalWrite(yellow,LOW);
  digitalWrite(green,LOW);
}
