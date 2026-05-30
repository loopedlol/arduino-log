# Project 08 - Digital Hourglass

## Date
May 30, 2026

## Task
To create a resettable timer that sounds an alarm once completed

## Summary
I built a circuit where a piezo was connected between digital pin 12 and GND, and another circuit where a tilt sensor was connected between digital pin 8 and GND through a 10K ohm resistor. I connected 6 diode LEDs each between a digital pin (2-7) and GND through a 220 ohm resistor. The program calls `millis()` in order to check the runtime without halting the program and turn on LEDs based on the number. It is essentially a timer with LED progress cues, and at the end the piezo produces a sound cue to indicate the timer has been completed. If the tilt sensor changes state, both ways from LOW to HIGH, the timer resets and the LEDs and piezo turn off.

## Materials
- Arduino Uno R4
- Breadboard
- Jumper wires
- Diode LEDs
- Tilt Sensor
- Piezo
- 10K ohm resistor
- 220 ohm resistors

## Photos
- ["Angle 1"](images/angle1.jpg)
- ["Angle 2"](images/angle2.jpg)
- ["Angle 3"](images/angle3.jpg)

## Code
- ["Main"](code/main.ino)

## Notes
- `millis()` can be used to check elapsed time since the program started running, and allows for other actions to be executed instead of halting the program like `delay()`
- A tilt switch only has two states, HIGH or LOW, and this can be used to determine a change in orientation 