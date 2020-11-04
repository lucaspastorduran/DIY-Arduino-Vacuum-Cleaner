#pragma once

#include "ArduinoVoltageSensor.h"

class SensorManager
{
  public:
    SensorManager();
    ~SensorManager();

  private:
    ArduinoVoltageSensor _batterySensor;
};
