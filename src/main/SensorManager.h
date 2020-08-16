#pragma once

#include "DistanceSensor.h"

class SensorManager
{
  public:
    SensorManager();
    ~SensorManager();

  private:
    DistanceSensor _frontSensor;
};
