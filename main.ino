int Sinput = A1;
int Buz = 3;

void setup() {
  pinMode(Sinput, INPUT);
  pinMode(Buz, OUTPUT);
}

void loop() {
  if (digitalRead(Sinput) == LOW) {
    delay(500);
    digitalWrite(Buz, HIGH);
  } else {
    digitalWrite(Buz, LOW);
  }
}
