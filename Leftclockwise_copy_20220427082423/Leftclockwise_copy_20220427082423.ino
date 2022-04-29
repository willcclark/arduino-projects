#include <Servo.h>
Servo servoLeft;
Servo servoRight;
void setup() {
  // tone(4, 3000, 1000);
  Serial.begin(9600);
  servoLeft.attach(11);
  servoRight.attach(10);

   delay(1000);
  Serial.println("Starting looop");
  servoLeft.writeMicroseconds(1700);
  servoRight.writeMicroseconds(1300);
  delay (1549);

  servoLeft.detach();
  servoRight.detach();
}

void loop() {
  // put your main code here, to run repeatedly:
 
}
