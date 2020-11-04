#include "AnalogSensor.h"

#include "Arduino.h"

AnalogSensor::AnalogSensor(const int inputPin, const double maxValue, const double refValue) :
  _inputPin(inputPin),
  _maxValue(maxValue),
  _refValue(refValue)
{
}

AnalogSensor::~AnalogSensor()
{
}

double AnalogSensor::getRawValue() const
{
  return analogRead(_inputPin);
}

double AnalogSensor::getValueConverted() const
{
  double result = getRawValue()*_refValue/_maxValue;
  return result;
}
