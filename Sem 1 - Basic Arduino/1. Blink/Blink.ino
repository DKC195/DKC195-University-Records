int i;

void setup() {
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(7, OUTPUT);
}

void loop() {
  for (i=11; i>6; i--) {
  digitalWrite(i, HIGH);
  delay(1000);
  }
  for (i=7; i<12; i++) {
  digitalWrite(i, LOW);
  delay(1000);
  }
}