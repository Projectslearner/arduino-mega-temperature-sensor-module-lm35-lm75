/*
    Project name : Temperature sensor module LM35 LM75
    Modified Date: 15-06-2024
    Code by : Projectslearner
    Website : 
*/

#include <Wire.h>
#include <LM75.h>
https://projectslearner.com/learn/arduino-mega-temperature-sensor-module-lm35-lm75
// Initialize LM75 object
LM75 lm75;

void setup() {
  Serial.begin(9600); // Initialize serial communication
  Wire.begin(); // Initialize I2C communication
  lm75.begin(); // Initialize LM75 sensor
}

void loop() {
  // Read temperature from LM75 sensor in Celsius
  float temperatureC = lm75.getTemperature();

  // Print temperature to Serial Monitor
  Serial.print("Temperature (LM75): ");
  Serial.print(temperatureC);
  Serial.println(" °C");

  delay(1000); // Delay before the next reading
}
