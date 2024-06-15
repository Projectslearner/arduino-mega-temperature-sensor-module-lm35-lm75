# Temperature Sensor Module (LM35 LM75) Project

#### Project Overview
The Temperature Sensor Module project showcases how to interface LM75 and LM35 temperature sensors with an Arduino Mega. Both sensors provide accurate temperature readings suitable for various applications, from environmental monitoring to industrial control systems.

#### Components Needed
- **Arduino Mega**
- **LM75 Temperature Sensor**
- **LM35 Temperature Sensor**
- **Jumper Wires**

#### Block Diagram

#### Circuit Setup
1. **Connecting the LM75 Sensor to Arduino Mega:**
   - **I2C Communication:** Connect SDA to A4 and SCL to A5 on the Arduino Mega.
   - **Power:** Connect VCC and GND to +5V and GND (ground), respectively.
   
2. **Connecting the LM35 Sensor to Arduino Mega:**
   - **Analog Pin:** Connect the output pin to an analog input pin on the Arduino Mega (e.g., A0).
   - **Power:** Connect VCC and GND to +5V and GND (ground), respectively.

#### Instructions
1. **Code Upload:**
   - Open the Arduino IDE and create a new sketch.
   - Copy and paste the provided Arduino code into the sketch.
   - Upload the code to the Arduino Mega.

2. **Testing:**
   - Open the Serial Monitor in the Arduino IDE (set to 9600 baud).
   - Observe temperature readings displayed in Celsius for both LM75 and LM35 sensors.
   - Verify readings are stable and within expected ranges.

#### Applications
- **Environmental Monitoring:** Use in weather stations or indoor climate control systems.
- **Industrial Control:** Monitor temperatures in industrial processes for quality assurance.
- **Research and Development:** Integrate temperature sensing into experimental setups for data collection.

#### Notes
- **Sensor Accuracy:** LM75 and LM35 sensors provide reliable temperature readings with varying resolutions and measurement ranges.
- **I2C Interface:** LM75 utilizes I2C for communication, enabling multiple sensor connections using a single bus.
- **Analog Output:** LM35 provides analog voltage output proportional to temperature, simplifying interfacing with analog input pins on Arduino.

---

#### Useful Links
🌐 [ProjectsLearner](https://projectslearner.com/learn/arduino-mega-temperature-sensor-module-lm35-lm75)  
📧 [projectslearner@gmail.com](mailto:projectslearner@gmail.com)  
📸 [Instagram](https://www.instagram.com/projectslearner/)  
📘 [Facebook](https://www.facebook.com/projectslearner)  
▶️ [YouTube](https://www.youtube.com/@ProjectsLearner)  
📘 [LinkedIn](https://www.linkedin.com/in/projectslearner)

Crafted for you with ❤️ from ProjectsLearner