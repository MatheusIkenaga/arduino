
#define DO 262
#define RE 294
#define MI 330
#define FA 349
#define SOL 392
#define LA 440
#define SI 494
#define DO_2 523

int pinoBuzzer = 6;

int melodia[] = {
  DO,RE,MI,FA,FA,FA,DO,RE,DO,RE,RE,RE,SOL,LA,FA,MI,MI,MI
  };

void setup() {
  pinMode (pinoBuzzer, OUTPUT);
}

void loop() {
  for (int i= 0; i < 18; i++){
    tone(pinoBuzzer, melodia[i]);
    delay(500);
    }
}
