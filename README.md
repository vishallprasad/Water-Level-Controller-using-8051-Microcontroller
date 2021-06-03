# Water-Level-Controller-using-8051-Microcontroller

The water level controller, which uses the 8051 microcontroller project, helps automatically control the water motor by detecting the water level in a tank. In this article, you will learn how to detect and control the water level in a tank or other container. This system monitors the tank water level and automatically turns ON the Motor when the tank is empty.

The Motor is turned OFF when the top tank or tanky is full. Here the water level of the tank is shown on the LCD screen (liquid crystal display). With this system, we can also avoid overflowing the water. Here we are designing the circuit which is used to detect and control the water level automatically in the overhead tank using 8051 Microcontroller.

## Introduction

Water level controller, the name itself indicates that an electronic device or circuit kit used for controlling the water level can be termed as a water level controller. It is difficult to know the level of water in the overhead tank such that wastage of water can happen frequently. To conserve water, avoid overflow of water in the overhead tank which may cause loss of water, loss of electrical power, etc.,. Thus, an ultrasonic water level controller using 8051 microcontroller is an innovative electronics project application for controlling water level.

A Water Level Controller using the 8051 Microcontroller project will help in automatically controlling the water motor by sensing the water level in a tank. This article explains how to detect and control the water level in an overhead tank or any other container. This system monitors the water level of the tank and automatically switches ON the motor whenever the tank is empty.

## Need of Project

A water level controller is a device that manages water levels on a variety of systems such as water tanks, pumps and swimming pools. The basic function of a water level controller is to regulate water flow and optimize system performance. One of the main advantages of water level control devices includes the ability to control power fluctuations when the motor is switched on. Most of these devices ensure uninterrupted water supply by filling the overhead tank once it is below level. The motor power is switched on when the overhead tank becomes empty and switches off automatically when the underground tank is empty or the overhead tank becomes full. In this way it becomes easy to ensure 24 hours water supply without any kind of interruption

## Application
- Fuel level indicator in vehicles.
- Used in big buildings where manual monitoring is difficult.
- Used in industries to control the liquid level automatically.
- Automatic water level controllers can be used in Homes apartments, commercial complexes.

## Limitation
- The Rust, Foul and Deteriorate.
- Wire use in the tank can be replaced every two years.

**System Circuit Diagram**
| :--: |
![Capture](https://user-images.githubusercontent.com/77826589/120591368-a556e180-c459-11eb-9498-30a5414a7c9f.PNG)


## Component Used
- AT89S52 Microcontroller (or any 8051 based Microcontroller)
- 8051 Programmer (Programming Board)
- 11.0592 MHz Quartz Crystal
- 2 x 33pF Capacitor
- 2 x 10KΩ Resistor (1/4 Watt)
- 10µF Capacitor
- Push Button
- 1KΩ x 8 Resistor Pack (for Pull – up)
- 16 x 2 LCD Display
- 5V Relay
- 4 x 2N2222 (NPN) Transistors
- DC Motor (for demonstration)
- 10KΩ Potentiometer
- 1N4007 PN Junction Diode
- Programming cable
- Connecting wires
- Power Supply
- Keil µVision IDE
- Proteus (for circuit diagram)

### Algorithm for Water Level Controller Circuit
```ruby
1] First configure the controller pins P0.0, P0.1 and P0.2 as inputs and P0.7 as output. Now, initialize the LCD.
2] Continuously check the water level input pins P0.0, P0.1 and P0.2.
3] If all the pins are low, then display tank as “EMPTY” on the LCD and make P0.7 pin HIGH to run the motor automatically.
4] If the level is low i.e. if P0.0 is HIGH, display the water level as “LOW” and continue to run the motor.
5] A HIGH pulse on the pin P0.1 indicates that water has reached half level. So, display the same thing on LCD and run the motor normally.
6] If P0.2 is HIGH, then the water level in the tank is FULL.
7] Now, make the P0.7 pin as LOW to turn off the motor automatically.
```

### How to Operate Water Level Controller Circuit using 8051 Microcontroller?
```ruby
Step 1 - Initially, write the program for Water Level Controller in Keil µVision IDE and generate the .hex file.
Step 2 - Burn the program (.hex file) to the microcontroller using external programmers and Proteus Software.
Step 3 - Now give the connections as per the circuit diagram.
Step 4 - If water in the upper tank is below the lower sensor, turn on the motor and display the message ‘Tank is empty and Motor is on’.
Step 5 - If water in the upper tank is above the lower sensor and below the mid sensor, turn on the motor and display the message ‘Tank is empty and Motor is on’.
Step 6 - If water in the upper tank touches the upper sensor, turn off the motor and display the message ‘Tank is full and motor is off’.
```

## Results

### Simulation Result State - 1
![Capture1](https://user-images.githubusercontent.com/77826589/120591918-96bcfa00-c45a-11eb-99a3-404d0307d29d.PNG)
| :--: |
**TANK IS EMPTY AND MOTOR IS ON SIMULATION RESULT**

### Simulation Result State - 2
![Capture2](https://user-images.githubusercontent.com/77826589/120592119-f3201980-c45a-11eb-88a3-73d976a3438d.PNG)
| :--: |
**TANK IS FULL AND MOTOR IS OFF SIMULATION RESULT**


## References
- https://www.circuitsarena.com/2018/03/water-level-controller-by-using-8051.html
- https://www.electronicshub.org/water-level-controller-using-8051-microcontroller/
