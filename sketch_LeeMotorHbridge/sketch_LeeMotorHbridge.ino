

void stopMotor() {
  digitalWrite(1, HIGH);
  digitalWrite(2, HIGH);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
}

void turnLeft() {
    digitalWrite(1, LOW);
    digitalWrite(2, HIGH);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
}

void turnRight() {
    digitalWrite(1, HIGH);
    digitalWrite(2, LOW);
    digitalWrite(3, HIGH);
    digitalWrite(4, LOW);
}


void setup() {

  pinMode(1, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);

}


void loop() {
  stopMotor();
  delay(500);
  turnLeft();
  delay(500);
  stopMotor();
  delay(500);
  turnRight();
  delay(500);
}
