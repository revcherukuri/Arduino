#include <Servo.h>
Servo servoLeft;
Servo servoRight;
void setup() {
  // put your setup code here, to run once:
  
}

void loop() {
servoLeft.attach(6);
  servoRight.attach(A0);
  servoLeft.write(180);
  delay(522);
  servoLeft.detach();
  servoRight.detach();
  // put your main code here, to run repeatedly:

}
