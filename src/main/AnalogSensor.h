#pragma once

#include <WString.h>

class AnalogSensor
{
  public:
    AnalogSensor(const int inputPin, const double maxValue, const double refValue);
    ~AnalogSensor();

    double getRawValue() const;
    double getValueConverted() const;

  private:
    const int _inputPin;
    const double _maxValue;
    const double _refValue;
};
