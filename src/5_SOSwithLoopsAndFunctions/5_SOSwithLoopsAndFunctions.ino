int shortValue = 200;
int longValue = 500;
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  morseS();
  morseO();
  morseS();
  delay(1000);
}

void morseS() {
  //s -----
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(shortValue);
    digitalWrite(ledPin, LOW);
    delay(shortValue);
  }
}

void morseO() {
  //0 -----
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(longValue);
    digitalWrite(ledPin, LOW);
    delay(longValue);
  }
}
