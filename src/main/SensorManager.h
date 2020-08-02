#pragma once

#include <DistanceSensor.h>

Class SensorManager
{
  public:
    SensorManager();
    ~SensorManager();

  private:
    DistanceSensor _frontSensor;
};
