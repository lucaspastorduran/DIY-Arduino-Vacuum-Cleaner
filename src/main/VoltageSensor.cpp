#include "VoltageSensor.h"

#include "Arduino.h"

VoltageSensor::VoltageSensor(const int pin, const double refValue) :
  Sensor("Voltage Sensor"),
  _pin(pin),
  _refValue(refValue)
{
}

VoltageSensor::~VoltageSensor()
{
}

double VoltageSensor::getRefValue() const
{
  return _refValue;
}

int VoltageSensor::getRawValue() const
{
  return analogRead(_pin);
}

double VoltageSensor::getVoltage() const
{
  return (getRawValue()*_refValue)/MAX_ANALOG_VALUE;
}

String VoltageSensor::getInfo() const
{
  String message = this->getModel() + " value is: " + getVoltage();
  return message;
}
