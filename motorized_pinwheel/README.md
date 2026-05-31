# Project 09 - Motorized Pinwheel

## Date
May 30, 2026

## Task
Power a rotary motor using a 9V battery

## Summary
The build consists of two circuits, where one includes a button switch that is connected between the board's power and digital pin 2. A pull-down resistor is also placed at the output of the button to prevent floating errors. In the other circuit, digital pin 9 is connected to a transistor, whose source is GND and drain is the motor's output. A 9V battery is snapped onto a battery snap and is placed on the opposite side of the breadboard. The motor is connected between the 9V battery and the transistor, with a back-voltage handling diode connecting the motor's output to input. Pressing the button closes the transistor and completes the motor circuit, causing the motor to spin.

## Materials
- Arduino Uno R4
- Breadboard
- Jumper wires
- MOSFET
- Battery snap
- 9V battery
- Button switch
- 10K ohm resistor
- Diode 1N4007
- Motor

## Photos
- [Angle 1](images/angle1.jpg)
- [Angle 2](images/angle2.jpg)

## Code
- [Main](code/main.ino)

## Notes
- Transistors allow low currents to control high voltage circuits, which allows the board to control the motor
- When dealing with motors, there should be a diode that handles the back-voltage in order to prevent damage to components
- The GNDs of circuits that use different voltages should be connected to create a common baseline