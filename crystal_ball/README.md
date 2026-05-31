# Project 10 - Crystal Ball

## Date
May 31, 2026

## Task
Display different text on LCD screen in response to tilting the setup

## Summary
The setup consists of a tilt sensor linked between power and digital pin 6, with a stabilizing pull-down resistor. Digital pins 2-5, 11 and 12 are connected to pins on the LCD. There is a potentiometer connected to power, GND, and V0 on the LCD to serve at a contrast controller. The LCD initially lights up with a welcome message, and then gives a random answer from an answer bank when the tilt sensor changes state.

## Materials
- Arduino Uno R4
- Breadboard
- Jumper wires
- LCD screen
- 220 ohm resistor
- 10K ohm resistor
- Potentiometer
- Tilt sensor

## Photos
- [Angle 1](images/angle1.jpg)
- [Angle 2](images/angle2.jpg)

## Code
- [Main](code/main.ino)

## Notes
- LCDs have many different pins that each control one component of the screen
- `random(a)` is a function that returns a random integer in the interval [0, a - 1]
- The `LiquidCrystal` library provides many functions that make it easier to control the LCD