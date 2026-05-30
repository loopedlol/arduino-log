const int switchPin = 8;
const int piezoPin = 12;

unsigned long previousTime = 0;

int switchState = 0;
int previousSwitchState = 0;

int led = 2;

long interval = 2 * 1000;

void setup() {

  Serial.begin(9600);

  for (int x = 2; x < 8; x++) {
    pinMode(x, OUTPUT);
  }

  pinMode(piezoPin, OUTPUT);
  pinMode(switchPin, INPUT);
}

void loop() {

  unsigned long currentTime = millis();

  if (currentTime - previousTime > interval) {
    previousTime += interval;
    digitalWrite(led, HIGH);
    led++;
  }

  if (led == 8) {
    while (digitalRead(switchPin) == previousSwitchState) {
      Serial.println(switchState);
      Serial.println(previousSwitchState);
      tone(piezoPin, 492, 20);
      delay(15);
    }
    noTone(piezoPin);
  }

  switchState = digitalRead(switchPin);

  if (switchState != previousSwitchState) {
    for (int x = 2; x < 8; x++) {
      digitalWrite(x, LOW);
    }

    led = 2;
    previousTime = currentTime;
  }

  previousSwitchState = switchState;
}
