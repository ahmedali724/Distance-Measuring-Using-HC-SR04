# Distance Measurement System with HC-SR04

Welcome to the Distance Measurement System project using the HC-SR04 ultrasonic sensor and ATmega32 microcontroller. This project allows you to accurately measure distances with precision and efficiency. Below, you'll find the essential information to get started.

## Introduction

This project focuses on building a distance measurement system using an ATmega32 microcontroller and the HC-SR04 ultrasonic sensor. The goal is to provide a reliable and efficient solution for measuring distances.

## Specifications

Key specifications and features of the Distance Measurement System with HC-SR04:

1. **Microcontroller**: Utilizes the ATmega32 microcontroller with an 8MHz clock frequency for accurate and high-speed operation.

2. **Distance Sensing**: Measures distances using the HC-SR04 ultrasonic sensor. For interfacing details, please refer to the "HC-SR04 Ultrasonic MT Student Tutorial" PDF.

3. **Circuit Operation**: The system operates by emitting ultrasonic pulses from the HC-SR04 sensor and measuring the time it takes for the pulses to bounce back from an object. This time is used to calculate the distance.

4. **Circuit Diagram**: ![Screenshot 2023-10-15 120541](https://github.com/ahmedali724/Distance-Measuring-Using-HC-SR04/assets/111287464/9c197990-a398-4910-b65e-25b6b2cab44a)

5. **Layered Architecture**: The project is designed and implemented using a layered architecture model, consisting of:
   - HAL Layer: Manages LCD and HC-SR04 ultrasonic sensor drivers.
   - MCAL Layer: Handles GPIO and Input Capture Unit (ICU) drivers.

