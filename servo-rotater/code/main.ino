#include <Servo.h>

Servo myServo;

int const potPin = A0;
int potVal;
int angle;

void setup() {
  // put your setup code here, to run once:
  analogReadResolution(12);
  myServo.attach(9);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  potVal = analogRead(potPin);
  Serial.print("Potentiometer Value: ");
  Serial.print(potVal);

  angle = map(potVal, 0, 4095, 0, 179);
  Serial.print(", angle value: ");
  Serial.println(angle);

  myServo.write(angle);
  delay(100);
}
