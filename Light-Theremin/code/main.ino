int sensorValue;
int sensorLow = 4095;
int sensorHigh = 0;

const int LEDPin = 13;

void setup() {
  // put your setup code here, to run once:
  analogReadResolution(12);
  pinMode(LEDPin, OUTPUT);
  digitalWrite(LEDPin, HIGH);
  Serial.begin(9600);

  while (millis() < 5000) {
    sensorValue = analogRead(A0);

    if (sensorValue > sensorHigh) {
      sensorHigh = sensorValue;
    }
    if (sensorValue < sensorLow) {
      sensorLow = sensorValue;
    }
  }

  digitalWrite(LEDPin, LOW);
}

void loop() {
  // put your main code here, to run repeatedly:
  sensorValue = analogRead(A0);
  int pitch = map(sensorValue, sensorLow, sensorHigh, 50, 4000);

  Serial.print(pitch);
  tone(8, pitch, 50);
  delay(50);
}
