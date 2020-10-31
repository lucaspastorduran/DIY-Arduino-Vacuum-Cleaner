#pragma once

#include "Sensor.h"

#include <WString.h>

class VoltageSensor : public Sensor
{
  public:
    VoltageSensor() = delete;
    VoltageSensor(const int pin, const double refValue);
    ~VoltageSensor();

    double getRefValue() const;
    int getRawValue() const;
    double getVoltage() const;

    String getInfo() const;

  private:
    const int _pin;
    const double _refValue;
};
