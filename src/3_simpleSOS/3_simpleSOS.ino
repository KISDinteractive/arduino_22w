int shortValue = 200;
int longValue = 500;
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  //s -----
  digitalWrite(ledPin, HIGH);
  delay(shortValue);
  digitalWrite(ledPin, LOW);
  delay(shortValue);
  digitalWrite(ledPin, HIGH);
  delay(shortValue);
  digitalWrite(ledPin, LOW);
  delay(shortValue);
  digitalWrite(ledPin, HIGH);
  delay(shortValue);
  digitalWrite(ledPin, LOW);
  delay(shortValue);

  //0 -----
  digitalWrite(ledPin, HIGH);
  delay(longValue);
  digitalWrite(ledPin, LOW);
  delay(longValue);
  digitalWrite(ledPin, HIGH);
  delay(longValue);
  digitalWrite(ledPin, LOW);
  delay(longValue);
  digitalWrite(ledPin, HIGH);
  delay(longValue);
  digitalWrite(ledPin, LOW);
  delay(longValue);

  //s -----
  digitalWrite(ledPin, HIGH);
  delay(shortValue);
  digitalWrite(ledPin, LOW);
  delay(shortValue);
  digitalWrite(ledPin, HIGH);
  delay(shortValue);
  digitalWrite(ledPin, LOW);
  delay(shortValue);
  digitalWrite(ledPin, HIGH);
  delay(shortValue);
  digitalWrite(ledPin, LOW);
  delay(shortValue);

  delay(1000);
}
