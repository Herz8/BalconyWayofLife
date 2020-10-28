#include <Arduino.h>

// Communicate with I2C/TWI devices -> SDA (data line) + SCL (clock line)
#include <Wire.h>

// RTC - Real Time Clock
#include "RTClib.h"
#include <RTC_functions.h>

// Include my other functions
#include <PumpyPumpFunctions.h>

// Defining Objects


// defining Variables


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  // check status of Components: 
  RTC_Status(); 
}

void loop() {
  // put your main code here, to run repeatedly:
  delay(5000);
  // TimeStamp
  // Serial.println(GetTimeStamp());
  
  String SensorDataLine1;
  SensorDataLine1 = String(GetTimeStamp());
  SensorDataLine1 += "; ";
  Serial.println(SensorDataLine1);
}