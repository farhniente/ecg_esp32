void setup() {
  Serial.begin(115200);
}

void loop() {
  int ecg = analogRead(34);

  Serial.println(ecg);

  delay(10);
}