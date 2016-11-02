Assuming each RGB component of an LED uses 15mA:
Total current budget: 400mA
400 - 40(MCU) - 30(power LEDs) = 330mA
330/15 = 22 individual RGB components can be lit at one time!!!
~24 leds so limit to 4 channel at a time

LED channels and other useful lines defined as lines in board.h

Things to check:
 - How to configure pins for USB data and BOOT0 selection in board.h?
 - 
