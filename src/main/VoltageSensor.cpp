#include "VoltageSensor.h"

#include "Arduino.h"

VoltageSensor::VoltageSensor(const int pin, const double maxValue, const double refValue) :
  AnalogSensor(pin, maxValue, refValue)
{
}

VoltageSensor::~VoltageSensor()
{
}

double VoltageSensor::getVoltage() const
{
  return getValueConverted();
}

String VoltageSensor::getInfo() const
{
  String message = "Voltage sensor value is: " + String(getVoltage());
  return message;
}
