#include <Arduino.h>

// Communicate with I2C/TWI devices -> SDA (data line) + SCL (clock line)
#include <Wire.h>

// RTC - Real Time Clock
#include "RTClib.h"
#include <RTC_functions.h>

// Sensor Definition
// Soil Humidity
int SH_SensorPin1 = A0; // Soil Sensor input at Analog PIN A0

// Include my other functions
#include <Project_functions.h>

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // check status of Components: 
  Activate_RTC();
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(1000);

  // TimeStamp
  
  String CurrentTime = GetTimeStamp();
  Serial.println(CurrentTime);
  Serial.println(GetSoilHumidity(SH_SensorPin1));
 

  // String SensorDataLine1;
  // SensorDataLine1 = String(GetTimeStamp());
  // SensorDataLine1 += "; ";
  // Serial.println(SensorDataLine1);
}