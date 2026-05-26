int notes[] = {262, 294, 330, 349};

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int keyVal = analogRead(A0);
  Serial.println(keyVal);

  if (keyVal > 1010) {
    tone(8, notes[0]);
  } else if (keyVal >= 950 && keyVal <= 1010) {
    tone(8, notes[1]);
  } else if (keyVal >= 850 && keyVal < 950) {
    tone(8, notes[2]);
  } else if (keyVal >= 350 && keyVal <= 500) {
    tone(8, notes[3]);
  } else {
    noTone(8);
  }

  delay(10);
}
