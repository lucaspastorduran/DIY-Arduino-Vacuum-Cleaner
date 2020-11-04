#pragma once

#include "VoltageSensor.h"

#include <WString.h>

const double ARDUINO_MAX_RAW_VALUE = 1023.0;
const double ARDUINO_REF_VALUE = 5.0;

class ArduinoVoltageSensor : public VoltageSensor
{
  public:
    ArduinoVoltageSensor() = delete;
    ArduinoVoltageSensor(const int pin);
    ~ArduinoVoltageSensor();

    String getInfo() const;
};
