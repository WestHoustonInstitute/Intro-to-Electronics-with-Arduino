# Introduction to Electronics with Arduino

<img width="1536" height="1024" alt="ChatGPT Image Mar 17, 2026, 01_02_32 PM" src="https://github.com/user-attachments/assets/adc3ba32-7727-4925-9479-ef2aefa112f5" />

## Overview

This project contains training materials for **Introduction to
Electronics using Arduino**. Participants learn the fundamentals of
electronics prototyping using an Arduino Uno, a breadboard, sensors,
LEDs, and a servo motor.

The training focuses on building a simple **embedded system** that
detects nearby objects using an ultrasonic distance sensor and responds
by activating an LED and moving a servo motor.

This repository contains example Arduino programs used throughout the
training.

------------------------------------------------------------------------

## Learning Objectives

After completing this training, participants should be able to:

-   Understand basic electronics concepts (voltage, current, resistance,
    ground)
-   Use a breadboard to construct circuits safely
-   Upload and run programs using the Arduino IDE
-   Control output devices such as LEDs and servo motors
-   Read sensor input from an ultrasonic distance sensor
-   Combine sensors and actuators to create an automated system
-   Troubleshoot common electronics and wiring issues

------------------------------------------------------------------------

## Prerequisites

Before beginning this training, participants should have:

-   Completed **Introduction to Electronics Training I** at IdeaStudio
-   Access to the **Arduino IDE**
-   Access to this GitHub repository

------------------------------------------------------------------------

## Hardware Components

The following components are used in this training:

-   Arduino Uno R3
-   Breadboard
-   LED
-   220Ω resistor
-   Ultrasonic Distance Sensor (HC-SR04)
-   Servo Motor (SG90 or similar)
-   Jumper wires
-   USB cable for Arduino

------------------------------------------------------------------------

## Project Structure

    Intro-to-Electronics-with-Arduino/
    │
    ├── 01_led_blink.ino
    │
    ├── 02_ultrasonic_led.ino
    │  
    ├── 03_servo_sweep.ino
    │
    └── 04_final_system.ino

### 1. LED Blink

A simple program that turns an LED on and off every second.

Concepts covered: - Digital output - Current limiting using resistors -
Basic Arduino program structure

### 2. Ultrasonic Sensor + LED

The Arduino reads distance from the HC-SR04 ultrasonic sensor and turns
the LED on when an object is closer than 20 cm.

Concepts covered: - Sensor input - Distance measurement - Conditional
logic

### 3. Servo Sweep

A servo motor rotates between 0° and 180° continuously.

Concepts covered: - Servo control - PWM signals - Using Arduino
libraries

### 4. Final Integrated System

Combines all components: - Ultrasonic sensor - LED - Servo motor

When an object is detected closer than 20 cm:

-   LED turns ON
-   Servo rotates

When the object moves away:

-   LED turns OFF
-   Servo returns to its original position

------------------------------------------------------------------------

## Example Applications

The system built in this training demonstrates concepts used in
real-world systems such as:

-   Smart gates
-   Parking assistance systems
-   Obstacle detection robots
-   Security alarms
-   Automated IoT devices

------------------------------------------------------------------------

## Software Requirements

Install the Arduino IDE:

https://www.arduino.cc/en/software

Upload the `.ino` files to the Arduino Uno using the
Arduino IDE.

------------------------------------------------------------------------

## Additional Learning Resources

Arduino Tutorials\
https://www.arduino.cc/en/Tutorial/HomePage

TinkerCAD Circuits Simulator\
https://www.tinkercad.com

Wokwi Arduino Simulator\
https://wokwi.com

SparkFun Electronics Tutorials\
https://learn.sparkfun.com

Adafruit Learning System\
https://learn.adafruit.com

Electronics Tutorials\
https://www.electronics-tutorials.ws

------------------------------------------------------------------------

## License

This project is intended for **educational use in makerspaces and
electronics training programs**.
