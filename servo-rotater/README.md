# Project 05 - Servo Rotator

## Date
May 24, 2026

## Task
Rotate a servo using input from potentiometer

## Summary
I built a circuit that included a potentiometer, and took in inputs by wiring the A0 analog pin to the output. I set the analog resolution to 12-bit using `analogReadResolution()` and mapped read values using `map()` to a 0-180 range. I used the `Servo` library to control the servo using digital pin 9.

## Materials
- Arduino Uno R4
- Breadboard
- Jumper wires
- Male header pins
- Servo motor
- Potentiometer
- Motor Arm
- 100µF capacitor

## Photos
- [`Angle 1`](20260524_143921.jpg)
- [`Angle 2`](20260524_143932.jpg)

## Code
- [`main`](code/main.ino)

## Notes
- Values can be scaled and mapped using `map()`
- Capacitors are used to smooth out electrical transitions and to offset current fluctuations
- Potentiometers are essentially manually adjustable resistors
