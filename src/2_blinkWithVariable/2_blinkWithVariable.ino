int delayValue = 1000;

void setup() {
  pinMode(13, OUTPUT);
}

void loop() {
  digitalWrite(13, HIGH);
  delay(delayValue);
  digitalWrite(13, LOW);
  delay(delayValue);
}