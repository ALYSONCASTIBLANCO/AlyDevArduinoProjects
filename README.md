# AlyDevArduinoProjects

[![Arduino](https://img.shields.io/badge/Arduino-00979D?logo=arduino&logoColor=white)](https://www.arduino.cc/)
[![C++](https://img.shields.io/badge/C%2B%2B-00599C?logo=cplusplus&logoColor=white)](https://isocpp.org/)
[![mBlock](https://img.shields.io/badge/mBlock-Visual%20Programming-blue)](https://mblock.cc/)
[![Educational](https://img.shields.io/badge/Purpose-Educational-green)](#about-the-project)
[![License](https://img.shields.io/badge/License-GPL%20v3-blue.svg)](#license)
[![Status](https://img.shields.io/badge/Status-Active-success)](#project-status)

**Arduino Educational Projects & Examples**

A collection of Arduino projects and examples used in educational environments, ranging from basic programming exercises to more complex hardware-integrated projects.

---

## Table of Contents

- [About the Project](#about-the-project)
- [Project Status](#project-status)
- [Purpose](#purpose)
- [Audience](#audience)
- [Repository Organization](#repository-organization)
- [Learning Path](#learning-path)
- [Hardware & Components](#hardware--components)
- [Project Catalog](#project-catalog)
  - [mBlock Projects](#mblock-projects)
  - [Arduino C++ Projects](#arduino-c-projects)
- [Requirements](#requirements)
- [How to Use This Repository](#how-to-use-this-repository)
- [Student Contributions](#student-contributions)
- [Screenshots](#screenshots)
- [Future Improvements](#future-improvements)
- [Contributing](#contributing)
- [Educational Disclaimer](#educational-disclaimer)
- [Author & Maintainer](#author--maintainer)
- [License](#license)

---

## About the Project

**AlyDevArduinoProjects** is an educational library of Arduino projects and examples developed for use with students.

The repository contains projects ranging from introductory exercises to more complex systems involving sensors, actuators, motor drivers, and multiple hardware components.

Projects are available in two main formats:

- **mBlock:** visual/block-based representations of Arduino programming concepts.
- **Arduino C++:** projects written directly in C++ for Arduino.

The repository is intended to serve as both a learning resource and a practical reference for students, teachers, and Arduino enthusiasts.

---

## Project Status

**Active educational repository**

Projects are continuously added, improved, and documented.

The repository contains different types of work, including:

- Complete examples
- Practice exercises
- Hardware experiments
- Integrated projects
- Unfinished prototypes

Not every project is intended to represent a finished application. Some projects are intentionally kept as exercises or experimentation points.

---

## Purpose

The main purpose of this repository is to provide a practical library of Arduino projects that can be used to:

- Practice programming concepts.
- Explore Arduino hardware.
- Understand how sensors and actuators interact with code.
- Experiment with motor control.
- Study existing examples.
- Provide students with reference implementations.
- Support classroom activities and independent practice.

---

## Audience

This repository can be useful for:

- Students learning Arduino and programming.
- Teachers looking for classroom examples.
- Arduino enthusiasts experimenting with hardware.
- Developers interested in simple embedded systems projects.
- The repository maintainer as a personal reference library.

---

## Repository Organization

The repository is divided into two main directories:

```text
AlyDevArduinoProjects/
│
├── mBlock/
│   ├── mblock_intro/
│   ├── AVOIDING_CAR_CODE/
│   ├── distance_sensor_intro/
│   ├── distance_sensor_LCD/
│   ├── distance_sensor_leds/
│   ├── FOOD_DISPENSER/
│   ├── HUMIDITY_SENSOR_INTRO/
│   ├── HUMIDITY_SENSOR_LCD/
│   ├── L293D_LOGIC/
│   ├── LCD_INTRO/
│   ├── Leds_Challenge/
│   ├── lights of skycraper/
│   ├── SERVO_INTRO/
│   ├── TEMP_SENSOR/
│   ├── TEMP_SENSOR_LCD/
│   └── VIDEOGAME/
│
└── Arduino_C/
    ├── ADC_PRACTICE_MOTOR/
    ├── DRV8833/
    ├── DRV8833_logic/
    ├── L298N_Logic/
    ├── OBSTACLES_ROBOT/
    ├── parkingbar&ultrasonic/
    ├── RFID_CAR_PARKING/
    ├── servo&analog/
    ├── servo&ultrasonic/
    └── ultrasonictest/
```

### `mBlock/`

Contains projects developed through visual/block programming in mBlock. These projects are especially useful for introducing Arduino concepts visually before moving into direct C++ programming.

### `Arduino_C/`

Contains projects written directly in C++ for Arduino, including hardware exercises, sensor experiments, motor control, and integrated systems.

Although the projects are presented differently, they are based on the same Arduino programming concepts and hardware interactions.

---

## Learning Path

The projects in this repository can be explored following a gradual progression:

```text
Basic Digital Output
        ↓
Analog Input
        ↓
Sensors
        ↓
Actuators
        ↓
Motor Drivers
        ↓
Sensor + Actuator Integration
        ↓
Complete Projects
```

Some examples that fit naturally into this progression include:

| Learning Stage | Example Projects |
|---|---|
| Digital Output | `mblock_intro`, `Leds_Challenge` |
| Analog Input | `servo&analog`, `ADC_PRACTICE_MOTOR` |
| Sensors | `distance_sensor_intro`, `TEMP_SENSOR`, `HUMIDITY_SENSOR_INTRO`, `ultrasonictest` |
| Actuators | `SERVO_INTRO`, `servo&analog` |
| Motor Drivers | `L293D_LOGIC`, `L298N_Logic`, `DRV8833`, `DRV8833_logic` |
| Sensor + Actuator Integration | `parkingbar&ultrasonic`, `servo&ultrasonic`, `OBSTACLES_ROBOT`, `FOOD_DISPENSER` |
| Integrated Projects | `RFID_CAR_PARKING` |

This learning path is a reference rather than a mandatory sequence.

---

## Hardware & Components

The repository currently includes projects using the following components:

- Arduino boards
- HC-SR04 ultrasonic sensor
- 16x2 LCD with I2C module
- L298N H-bridge
- L293D H-bridge
- DRV8833 H-bridge
- Servo motors
- DC motors
- DHT11 temperature/humidity sensor
- Soil moisture sensor
- RFID sensor
- Potentiometers
- LEDs

Different projects use different combinations of these components.

---

# Project Catalog

## mBlock Projects

These projects use mBlock's visual programming environment to represent Arduino logic through blocks.

| Project | Description | Hardware |
|---|---|---|
| `mblock_intro` | Classic Blink exercise using Arduino digital pin 13. | Arduino, LED |
| `AVOIDING_CAR_CODE` | Controls an L298N H-bridge and executes movement sequences in different directions. Originally intended to be combined with an ultrasonic sensor. | Arduino, L298N, DC motors |
| `distance_sensor_intro` | Reads distance from an HC-SR04 ultrasonic sensor and outputs the measurement through Serial. | Arduino, HC-SR04 |
| `distance_sensor_LCD` | Reads distance from an HC-SR04 and displays the result on a 16x2 LCD. | Arduino, HC-SR04, LCD, I2C |
| `distance_sensor_leds` | Uses distance measurements to control a dynamic LED sequence. | Arduino, HC-SR04, LEDs |
| `FOOD_DISPENSER` | Simulates an automatic food dispenser. When an object is detected nearby, a servo controls the food access mechanism. | Arduino, HC-SR04, Servo |
| `HUMIDITY_SENSOR_INTRO` | Reads soil moisture levels and outputs the result through Serial. | Arduino, Soil Moisture Sensor |
| `HUMIDITY_SENSOR_LCD` | Reads soil moisture and displays the result on a 16x2 LCD. | Arduino, Soil Moisture Sensor, LCD, I2C |
| `L293D_LOGIC` | Demonstrates how to control an L293D H-bridge without using a library. | Arduino, L293D, DC motors |
| `LCD_INTRO` | Introduces the use of a 16x2 LCD through mBlock and an I2C module. | Arduino, LCD, I2C |
| `Leds_Challenge` | Short exercise for controlling multiple digital outputs. | Arduino, LEDs |
| `lights of skycraper` | LED sequence representing a building designed by a student in 2022. | Arduino, LEDs |
| `SERVO_INTRO` | Basic servo movement from 0 to 90 degrees. | Arduino, Servo |
| `TEMP_SENSOR` | Reads temperature from a DHT11 sensor and outputs the value through Serial. | Arduino, DHT11 |
| `TEMP_SENSOR_LCD` | Reads temperature from a DHT11 sensor and displays the value on a 16x2 LCD. | Arduino, DHT11, LCD, I2C |
| `VIDEOGAME` | Unfinished experiment using keyboard input to control a simple videogame. | Arduino |

> **Note:** Some Serial-based sensor projects use the `uBlock.Serial` extension in mBlock.

> **TODO:** Identify and document the exact mBlock extension used by `LCD_INTRO`.

---

## Arduino C++ Projects

These projects implement Arduino logic directly in C++.

| Project | Description | Hardware |
|---|---|---|
| `ADC_PRACTICE_MOTOR` | Reads an analog input and uses the value to regulate the speed of a DC motor. | Arduino, Potentiometer, DC motor |
| `DRV8833` | Controls a DRV8833 motor driver using its library. | Arduino, DRV8833, DC motors |
| `DRV8833_logic` | Demonstrates direct control of a DRV8833 motor driver without relying on a library. | Arduino, DRV8833, DC motors |
| `L298N_Logic` | Demonstrates direct control of an L298N H-bridge without using a library. | Arduino, L298N, DC motors |
| `OBSTACLES_ROBOT` | Basic obstacle-avoidance robot logic using an ultrasonic sensor and an L298N motor driver. | Arduino, HC-SR04, L298N, DC motors |
| `parkingbar&ultrasonic` | Simulates an automatic parking barrier using an ultrasonic sensor and a servo motor. | Arduino, HC-SR04, Servo |
| `RFID_CAR_PARKING` | Simulates a parking entrance barrier where an RFID identification is required before the servo opens the barrier. | Arduino, RFID, Servo |
| `servo&analog` | Controls servo position according to an analog input. | Arduino, Potentiometer, Servo |
| `servo&ultrasonic` | Implements the basic sensor-and-servo logic used for the parking barrier project. | Arduino, HC-SR04, Servo |
| `ultrasonictest` | Basic test and introduction to HC-SR04 ultrasonic sensor usage. | Arduino, HC-SR04 |

---

## Requirements

This repository is intended as a reference library rather than a step-by-step installation guide.

Depending on the project, you may need:

### Software

- [Arduino IDE](https://www.arduino.cc/en/software)
- [mBlock](https://mblock.cc/)
- `uBlock.Serial` extension for specific Serial-based mBlock projects.

### Hardware

Hardware requirements vary from project to project.

Check the individual project code and documentation before assembling a circuit.

---

## How to Use This Repository

You can use the repository as a reference library:

1. Browse the project categories.
2. Choose a project related to the concept you want to practice.
3. Review the source code or mBlock project.
4. Identify the hardware used.
5. Experiment with the project and modify it to explore different behaviors.

The projects are not intended to follow a single mandatory workflow. They can be explored according to the learner's needs and current level.

---

## Student Contributions

This repository also includes projects created during student learning experiences.

### `lights of skycraper`

This project was designed by a student in **2022** and implements an LED sequence representing a skyscraper.

It is preserved in the repository as an example of student-created work.

---

## Screenshots

Screenshots and visual documentation will be added progressively.

> Future documentation may include project previews, circuit setups, and examples of the resulting hardware behavior.

---

## Future Improvements

Planned improvements include:

- Add circuit schematics and wiring diagrams.
- Add more detailed documentation for individual projects.
- Identify and document the exact LCD extension used in `LCD_INTRO`.
- Add more Arduino projects over time.
- Improve project organization by difficulty or learning stage.
- Expand visual documentation and screenshots.

---

## Contributing

Contributions are welcome.

You can contribute by:

- Adding new Arduino projects.
- Improving existing code.
- Improving documentation.
- Adding circuit schematics or wiring diagrams.
- Fixing errors.
- Suggesting improvements.
- Reporting issues.

A typical contribution workflow is:

```text
Fork
  ↓
Create / modify a project
  ↓
Commit your changes
  ↓
Open a Pull Request
```

For larger changes, opening an issue first can help discuss the proposed improvement.

---

## Educational Disclaimer

These projects are intended for educational and experimental purposes.

Always verify electrical connections, component specifications, voltage requirements, and power requirements before assembling or modifying a circuit.

---

## Author & Maintainer

**Alyson Castiblanco**

Main contributor and maintainer.

GitHub:  
https://github.com/ALYSONCASTIBLANCO

---

## License

This project is licensed under the **GNU General Public License v3.0**.

You are free to study, modify, and redistribute the software under the terms of the license.

See the [GNU General Public License v3.0](https://www.gnu.org/licenses/gpl-3.0.html) for more information.
