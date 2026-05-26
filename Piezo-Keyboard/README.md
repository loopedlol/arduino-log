# Project 07 - Piezo Keyboard

## Date
May 25, 2026

## Task
To change the note of a piezo based on button input

## Design
I built a circuit where a piezo is connected between digital pin 8 and GND. The `tone()` function is then used to set the sound frequency of the piezo. In a parallel circuit, four buttons are organized in a resistor ladder and connected to power each through different resistance. The buttons have a common path to GND through a 10K ohm resistor, and analog pin A0 is connected to the output of the ladder. This design makes it so that each button, when pressed alone, has its own electrical signature value.

## Materials
- Arduino Uno R4
- Breadboard
- Jumper wires
- 220 ohm resistor
- 1K ohm resistor
- 10K ohm resistor
- Piezo
- Switches

## Photos
- [angle1](images/angle1.jpg)
- [angle2](images/angle2.jpg)

## Code
- [main](code/main.ino)

## Notes
- A resistor ladder is a setup of resistors and switches that all lead into a single analog input
- A voltage divider is a circuit that takes in a larger voltage and outputs a precise reduced voltage