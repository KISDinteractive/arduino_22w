int shortValue = 100;
int longValue = 500;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  //s
  digitalWrite(13, HIGH);
  delay(shortValue);
  digitalWrite(13, LOW);
  delay(shortValue);
  digitalWrite(13, HIGH);
  delay(shortValue);
  digitalWrite(13, LOW);
  delay(shortValue);
  digitalWrite(13, HIGH);
  delay(shortValue);
  digitalWrite(13, LOW);
  delay(shortValue);

  //0
  digitalWrite(13, HIGH);
  delay(longValue);
  digitalWrite(13, LOW);
  delay(longValue);
  digitalWrite(13, HIGH);
  delay(longValue);
  digitalWrite(13, LOW);
  delay(longValue);
  digitalWrite(13, HIGH);
  delay(longValue);
  digitalWrite(13, LOW);
  delay(longValue);

  //s
  digitalWrite(13, HIGH);
  delay(shortValue);
  digitalWrite(13, LOW);
  delay(shortValue);
  digitalWrite(13, HIGH);
  delay(shortValue);
  digitalWrite(13, LOW);
  delay(shortValue);
  digitalWrite(13, HIGH);
  delay(shortValue);
  digitalWrite(13, LOW);
  delay(shortValue);

  delay(1000);
}