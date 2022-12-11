
#define Buzzer 2
#define MQ2_Analog 0
#define MQ2_Digital 3
#define SensorLevel 175
#define ledVermelho 9
#define ledVerde 8

int digital_read = 0;
int analog_read = 0;

void setup()
{
  // Configura os IOs
  pinMode(MQ2_Digital, INPUT);
  pinMode(Buzzer, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  // Inicializa a serial
  Serial.begin(9600);
}
void loop()
{
  digitalWrite(ledVerde, LOW);
  digitalWrite(ledVermelho, LOW);

  // Le os dados do sensor MQ2
  digital_read = digitalRead(MQ2_Digital);
  analog_read = analogRead(MQ2_Analog);

  //apresenta as leituras na porta serial
  Serial.println("Saida Digital:");
  Serial.println(digital_read);
  Serial.println(" Saida Analogica:");
  Serial.println(analog_read);
  if (analog_read > SensorLevel)
  {
    // Aciona o Buzzer
    digitalWrite(Buzzer, HIGH);
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVerde, LOW);
    delay(50);
  }
  else
  {
    // Desliga o buzzer
    digitalWrite(Buzzer, LOW);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVerde, HIGH);
    delay(50);
  }
  
  delay(50);
}
