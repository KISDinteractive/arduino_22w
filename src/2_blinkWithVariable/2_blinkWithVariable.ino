int delayValue = 1000;
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  digitalWrite(ledPin, HIGH);
  delay(delayValue);
  digitalWrite(ledPin, LOW);
  delay(delayValue);
}