# Project 11 - Servo Lock

## Date
June 5, 2026

## Task
Rotate servo based on vibration input or switch input

## Summary
The build consists of many circuits, and one aspect is that the servo is controlled by digital pin 9. The diode LEDs are controlled by digital pins 3 through 5, and piezo output is read by analog pin A0. The button switch is read by digital pin 2. When the button is pressed, pin 2 will read HIGH and cause the servo to rotate into locked position if it is not already there. Once locked, if the piezo detects sufficient vibrations a certain number of times, then the board will make the servo rotate into its unlocked position. A capacitor is present to smooth out voltage fluctuations.

## Materials
- Arduino Uno R4
- Breadboard
- Jumper wires
- Button switch
- Piezo
- Servo motor
- Male header pins
- 100µF capacitor
- Red, green, yellow diode leds
- 220 ohm resistor
- 10k ohm resistor
- 1M ohm resistor

## Photos
- [Angle 1](images/angle1.jpg)
- [Angle 2](images/angle2.jpg)
- [Angle 3](images/angle3.jpg)

## Code
- [Main](code/main.ino)

## Notes
- A piezo can be used as input by connecting the negative end to an analog pin such as A0, and can be read using `analogRead()`
- Custom functions can be defined by first specifying the return value type, then declaring the function name, and lastly defining parameters