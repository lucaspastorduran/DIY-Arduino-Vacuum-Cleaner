#include "ArduinoVoltageSensor.h"

ArduinoVoltageSensor::ArduinoVoltageSensor(const int inputPin) :
  VoltageSensor(inputPin, ARDUINO_MAX_RAW_VALUE, ARDUINO_REF_VALUE)
{
}

ArduinoVoltageSensor::~ArduinoVoltageSensor()
{
}

String ArduinoVoltageSensor::getInfo() const
{
  String message = "Arduino Voltage Sensor value: " + String(this->getVoltage()) + "V";
}
