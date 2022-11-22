void setup() {
  Serial.begin(9600);
  pinMode(A0,INPUT); //Sensor connected to A0
  pinMode(13,OUTPUT);
}

void loop() {
  int inputValue = analogRead(A0); // read sensor value and save it into variable 'inputValue'
  Serial.println(inputValue); // print'inputValue to Serial Monitor 

  if (inputValue > 500) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }
  delay(10);
}