🔥🚗 Bluetooth Fire Fighting Robot using Arduino Nano

A Bluetooth-controlled firefighting robot built using Arduino Nano, HC-05 Bluetooth module, and flame sensors.
The robot can move wirelessly using a smartphone and automatically detect fire and spray water using a pump system.

📌 Table of Contents

<a href="#overview">Overview</a>

<a href="#problem-statement">Problem Statement</a>

<a href="#project-features">Project Features</a>

<a href="#hardware-components">Hardware Components</a>

<a href="#circuit-diagram">Circuit Diagram</a>

<a href="#folder-structure">Folder Structure</a>

<a href="#how-it-works">How It Works</a>

<a href="#how-to-run-the-project">How to Run the Project</a>

<a href="#demo-video">Demo Video</a>

<a href="#challenges-faced">Challenges Faced</a>

<a href="#results">Results</a>

<a href="#future-improvements">Future Improvements</a>

<a href="#author">Author</a>

🔍 Overview

This project demonstrates the design and development of a Bluetooth Controlled Fire Fighting Robot using Arduino Nano.

The robot receives movement commands from a smartphone through the HC-05 Bluetooth module and controls DC motors using an L298N motor driver.

The system also uses three flame sensors to detect fire and activates a water pump through a relay module to extinguish the fire. A servo motor controls the direction of the water nozzle.

❓ Problem Statement

Fire accidents can cause serious damage to property and human life. Manual firefighting can sometimes be dangerous in hazardous environments.

This project aims to develop a low-cost robotic firefighting system that can detect fire and spray water while being controlled wirelessly through Bluetooth.

✨ Project Features

Wireless Bluetooth control using smartphone

Forward, backward, left, right and stop movement

Fire detection using multiple flame sensors

Automatic water pump activation for fire extinguishing

Servo motor for water spray direction control

LED and buzzer alert system

Two-layer wooden chassis for safe component arrangement

Low-cost and easy-to-build design

🔩 Hardware Components

Arduino Nano

HC-05 Bluetooth Module

L298N Motor Driver

2 × BO DC Motors with wheels

3 × Flame Sensors

SG90 Servo Motor

5V Water Pump

Relay Module

LED Indicator

Buzzer / Speaker

18650 Li-ion Batteries

DC-DC Buck Converter

Wooden chassis base

Nuts, bolts and jumper wires

📄 Detailed list available in:

"C:\RC Fire Car\requirements\Component Requirements.txt"

🔌 Car Structure

📍 Location:
"C:\RC Fire Car\media\car_photos\RC_FireCar_Front.jpeg"

📁 Folder Structure

bluetooth-fire-fighting-robot/
│
├── README.md
├── requirements.txt
│
├── code/                         # Arduino source code
│   └── fire_fighting_robot_arduino_nano/
│       └── Fire_Fighting_Robot_Arduino_Nano.ino
│
│
├── media/                        # Images & demo
│   ├── robot_photo/
│   │   ├── robot_front.jpg
│   │   ├── robot_back.jpg
│   │   └── robot_stucture.jpg
│   └── demo_video_link.txt
│
├── report/                       # Project documentation
│   └── bluetooth_fire_fighting_robot_using_arduino_nano.pdf

⚙️ How It Works

Smartphone sends movement commands via Bluetooth

HC-05 receives commands and forwards them to Arduino Nano

Arduino processes the commands

L298N motor driver controls the motors

Flame sensors detect fire

When fire is detected:

LED and buzzer activate

Servo aligns water nozzle

Relay turns ON water pump

Water is sprayed to extinguish the fire

▶️ How to Run the Project

Install Arduino IDE

Connect Arduino Nano to PC using USB

Open the .ino file from:

code/fire_fighting_robot_arduino_nano/

Select:

Board → Arduino Nano

Processor → ATmega328P

Port → COM Port

Upload the code

Power the robot

Pair the HC-05 Bluetooth module with your smartphone

Control the robot using a Serial Bluetooth Terminal App

🎥 Demo Video

📹 Watch the working demo here:

Check:
https://drive.google.com/file/d/1HA-GH6swl0WtCEgR7G8Eb3HfLAJ5L8d5/view?usp=drivesdk

⚠️ Challenges Faced

During development several practical challenges were encountered:

HC-05 Bluetooth module connected only with Serial Bluetooth Terminal, not with some controller apps

Water sometimes flowed through the pipe even when the pump was OFF due to gravity and tank position

Controlling the direction of the water spray required multiple servo and nozzle adjustments

Initially components were attached using double-sided tape, which was unstable. Later glue gun mounting was found to be more reliable

These challenges helped improve understanding of Bluetooth communication, mechanical design, and fluid control.

✅ Results

Successful Bluetooth based robot control

Reliable fire detection using flame sensors

Automatic water spraying system implemented

Stable robotic movement achieved

🔮 Future Improvements

Add ultrasonic sensors for obstacle avoidance

Develop a custom Android control application

Add camera module for remote monitoring

Implement Wi-Fi based long-range control

Improve water pressure and nozzle system

👤 Author

Janmejoy Chakraborty
Electronics & Communication Engineering
Dr. B. C. Roy Engineering College, Durgapur

📧 Email: janmejoychakraborty1020@gmail.com

🔗 LinkedIn:
https://www.linkedin.com/in/janmejoy-chakraborty-8a9164319/