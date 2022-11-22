int shortValue = 200;
int longValue = 500;
int ledPin = 13;

void setup() {
  pinMode(a0,INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int inputValue = analogRead(A0); 

  if (inputValue > 500) {
    morseS();
    morseO();
    morseS();
    delay(1000);
  } else {
    delay(100);
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
void morseS() {
  //s -----
  for (int i = 0; i < 3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(shortValue);
    digitalWrite(ledPin, LOW);
    delay(shortValue);
  }
}
