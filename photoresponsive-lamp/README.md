# Project 04 - Photoresponsive Lamp

## Date
May 23, 2026

## Task
Change RGB LED color based on ambient light

## Summary
I built a simple circuit that took in inputs from 3 phototransistors, each with their own respective green, red, or blue light filter. I used `analogRead()` to obtain data from these sensors, and mapped the values to a standard 0-255 RGB scale. `analogWrite()` and PWM was used to transmit this color information to each of the color pins on the RGB LED. 

## Materials
- Arduino Uno R4
- Breadboard
- Jumper wires
- 220 ohm resistors
- 10k ohm resistors
- RGB LED
- Phototransistors
- Colored gels

## Photos
- `20260523_110437.jpg`
- `20260523_110454.jpg`
- `20260523_110505.jpg`

## Code
- `code.ino`

## Notes
- `PWM` is a technique where the output pin is turned HIGH and LOW rapidily over consistent periods.
- Digital pins that can use PWM are marked with a preceding `~`
- The `duty cycle` represents the percentage of time that the pin is set to HIGH in the PWM cycle.
