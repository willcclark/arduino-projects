#include <Servo.h>
Servo servoLeft;
Servo servoRight;
void setup() {
  // tone(4, 3000, 1000);
  Serial.begin(9600);
  servoLeft.attach(13);
  servoRight.attach(12);
  delay(1000);
  Serial.println("Starting looop");
  servoLeft.writeMicroseconds(1500);
  servoRight.writeMicroseconds(1500);
}

void loop() {
  // put your main code here, to run repeatedly:
}