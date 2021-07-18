# Tablet-stand-robot-Ultra-sonic-sensor
sonic-sensor
In this repository I have designed a robot that uses ultra-sonic sensor in one arduino card to control LED light in another arduino card.
The main objective of this robot is to sense if there is any human nearby the tablet for specific amount of time and if yes then turn on the tablet. This project was supposed to control tablet using bluetooth device but since bluetooth is not supported in tinkercad, we are using another arduino and LED light representing Tablet and bluetooth device. Serial communication between two boards are required here as well as each arduino card is having its own code. I have used tinker cad to simulate this circuit and can be found here:[Tinkercad link](https://www.tinkercad.com/things/i2dj9cwRCgx-ultra-sonic-sensor/editel?sharecode=rc-uAUlwxapXdeho-j3yGECvB7mxhBw07iaVfClnzx4)

## EQUATIONS
in order to use distance sensor a trigger signal is sent and echo is received and then time of the transferred signal is calculated. Distance is equal time multiplied by 0.034 divided by 2 DISTANCE=TIME(0.034/2) in centemeters.
I have choosen 100cm as the range and it can be changed in variable called y in the code.


## CODE
The first arduino card (MASTER) is attached to ultra-sonic sensor and to second board and it is coded such that 1-Declaring all ports and variables. 2- initiating data transfer and set in/out ports. 3- in the loop void we first gonna trigger and read echo of the sensor and if anyone nearby then wait for a second then again trigger and read echo of the sensor and if anyone nearby then wait for a second and do the same thing for the third time then if there still someone nearby, send HIGH signal to board two and delay for 10 seconds. If else send LOW signal to board two and delay for 0.5 seconds.
The reason behind this is to make sure that the same person is standing infront of the robot for three seconds to save more power and to be more accurate.
#include <Wire.h> is used for communication of two arduino boards.

For the second arduino card (SLAVE), it is connected with LED light and coded such that, 1- Declaring all ports and variables. 2-initiating data receiving and set in/out ports. 3- if the received signal is HIGH then, turn on LED light else turn off LED light.

## ATTACHMENTS

Let me introduce all the attachments in this repository. There are several files with the following extensions: **ino** file, which is an Arduino code to control LED blinking. and there are **PNG** files to show the simulation before and after running the simulation.

If you are working on this in real life please check for the connection of each element carefully as shown in the simulation file of the pictures attached before running for the safety of your tools.
