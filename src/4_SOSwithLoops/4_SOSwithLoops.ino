int shortValue = 100;
int longValue = 500;
int ledPin = 13;

void setup() {
  pinMode(ledPin, OUTPUT);
}

void loop() {
  //s -----
  for ( int i= 0 ; i<3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(shortValue);
    digitalWrite(ledPin, LOW);
    delay(shortValue);
  }
  //0 -----
  for ( int i= 0 ; i<3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(longValue);
    digitalWrite(ledPin, LOW);
    delay(longValue);
  }
  //s -----
  for ( int i= 0 ; i<3; i++) {
    digitalWrite(ledPin, HIGH);
    delay(shortValue);
    digitalWrite(ledPin, LOW);
    delay(shortValue);
  } 
  delay(1000);
}
