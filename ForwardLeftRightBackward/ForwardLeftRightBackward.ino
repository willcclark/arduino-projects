// Robotics with the BOE Shield - ForwardLeftRightBackward
// Move forward, left, right, then backward for testing and tuning.

#include <Servo.h>                           // Include servo library

Servo servoLeft;                             // Declare left and right servos
Servo servoRight;
 
void setup()                                 // Built-in initialization block
{ 
  tone(4, 3000, 1000);                       // Play tone for 1 second
  delay(1000);                               // Delay to finish tone

  servoLeft.attach(10);                      // Attach left signal to P13 
  servoRight.attach(11);                     // Attach right signal to P12

Serial.begin(9600);

Serial.println("starting loop #1");
for (int speed = 0; speed<= 100; speed +=2)
{
  servoLeft.writeMicroseconds(1500+speed);
  servoRight.writeMicroseconds(1500-speed);
  delay(20);
}

delay(1500);

Serial.println("starting loop #2");
for(int speed = 100; speed >= 0; speed -=2){
servoLeft.writeMicroseconds(1500+speed);
servoRight.writeMicroseconds(1500-speed);
delay(20);
}

delay(1500);

Serial.println("starting loop #3");
for(int speed = 100; speed >= 0; speed -=2){
servoLeft.writeMicroseconds(1500+speed);
servoRight.writeMicroseconds(1500-speed);
delay(20);
}

delay(1500);

Serial.println("starting loop #4");
for(int speed = 100; speed >= 0; speed -=2){
servoLeft.writeMicroseconds(1500+speed);
servoRight.writeMicroseconds(1500-speed);
delay(20);
}
}
void loop()
{
}