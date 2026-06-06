#include <Servo.h>
Servo myServo;

const int piezo = A0;
const int switchPin = 2;
const int greenLED = 3;
const int yellowLED = 4;
const int redLED = 5;

int knockVal;
int switchVal;

const int quietKnock = 20;
const int loudKnock = 200;

boolean locked = false;
int numberOfKnocks = 0;



void setup() {


  myServo.attach(9);
  delay(50);
  myServo.write(0);

  pinMode(greenLED, OUTPUT);
  pinMode(yellowLED, OUTPUT);
  pinMode(redLED, OUTPUT);
  pinMode(switchPin, INPUT);

  delay(50);
  digitalWrite(greenLED, HIGH);

  Serial.begin(9600);
  delay(50);
  Serial.println("The box is currently unlocked");


}



void loop() {


  if (locked == false) {

    switchVal = digitalRead(switchPin);

    if (switchVal == HIGH) {

      locked = true;

      digitalWrite(greenLED, LOW);
      digitalWrite(redLED, HIGH);

      myServo.write(90);

      Serial.println("The box is now locked");
      delay(1000);

    }

  } else {

    knockVal = analogRead(piezo);

    if (numberOfKnocks < 3 && knockVal > 0) {

      if (checkForKnocks(knockVal) == true) {

        numberOfKnocks++;

        Serial.print(3 - numberOfKnocks);
        Serial.println(" more knocks to go");

      }

    }

    if (numberOfKnocks >= 3) {

      locked = false;

      myServo.write(0);

      delay(50);
      digitalWrite(redLED, LOW);
      digitalWrite(greenLED, HIGH);

      Serial.println("The box is now unlocked");

      numberOfKnocks = 0;

    }

  }

  delay(50);

}



boolean checkForKnocks(int value) {


  if (value < loudKnock && value > quietKnock) {

    digitalWrite(yellowLED, HIGH);
    delay(500);
    digitalWrite(yellowLED, LOW);

    Serial.print("Valid knock of value ");
    Serial.println(value);

    return true;

  } else {

    Serial.print("Invalid knock of value ");
    Serial.println(value);

    return false;

  }


}