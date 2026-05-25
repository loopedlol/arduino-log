# Project 06 - Light Theremin

## Date
May 24, 2026

## Task
Producing sound from a piezo based on the brightness of ambient light

## Summary
I built a circuit with a phototransistor linked to analog pin A0, which is read using `analogRead()`. A piezo is connected between GND and digital pin 8 on output mode. In the first 5 seconds of the program, the program records the extremes from the values collected by the phototransistor. These recorded extremes are then used to calibrate future sensor values using `map()` to achieve the desired frequency range of the piezo.

## Materials
- Arduino Uno R4
- Breadboard
- Jumper wires
- Phototransistor
- Piezo
- 10K resistor

## Photos
- [Angle 1](images/angle1.jpg)
- [Angle 2](images/angle2.jpg)

## Code
- [Main](code/main.ino)

## Notes
- `tone()` creates a wave with a duty cycle of 50%, but the frequency is adjustable
- A piezo operates by vibrating when changing voltages are applied through it
- `map()` can be used to calibrate the range of sensor values to actuator ranges