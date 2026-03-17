#include <Servo.h>

Servo myServo;

void setup() {
  myServo.attach(6);   // Servo connected to pin 6
}

void loop() {
  myServo.write(180);  // Rotate to 180 degrees
  delay(1000);         // Wait 1 second

  myServo.write(0);    // Rotate back to 0 degrees
  delay(1000);         // Wait 1 second
}
