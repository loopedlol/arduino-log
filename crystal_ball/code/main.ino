#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

const int switchPin = 6;
int switchState = 0;
int previousSwitchState = 0;

int reply;
const char* replies[] = {"Yes", "Possibly", "Definitely", "Unsure", "Ask again", "No", "Doubtful", "Impossible"};

void setup() {
  pinMode(switchPin, INPUT);
  
  lcd.begin(16, 2);

  delay(2000);

  lcd.print("Ask the");
  lcd.setCursor(0, 1);
  lcd.print("Crystal Ball!");
}

void loop() {
  switchState = digitalRead(switchPin);

  if (switchState != previousSwitchState && switchState == LOW) {
    reply = random(8);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("The ball says:");
    lcd.setCursor(0, 1);
    lcd.print(replies[reply]);
  }

  previousSwitchState = switchState;
}