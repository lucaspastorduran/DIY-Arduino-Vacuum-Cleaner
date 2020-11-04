#pragma once

#include "AnalogSensor.h"

#include <WString.h>

class VoltageSensor : public AnalogSensor
{
  public:
    VoltageSensor() = delete;
    VoltageSensor(const int pin, const double maxValue, const double refValue);
    ~VoltageSensor();

    double getRefValue() const;
    int getRawValue() const;
    double getVoltage() const;

    String getInfo() const;
};
