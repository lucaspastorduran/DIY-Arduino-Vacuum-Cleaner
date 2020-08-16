#pragma once

#include "Sensor.h"

class DistanceSensor : public Sensor
{
  public:
    DistanceSensor();
    ~DistanceSensor();

    double getMaxRange() const;
    double getResolution() const;
    
    double getDistance() const;

  private:
    const double MAX_RANGE;
    const double RESOLUTION;
    
    double currentDistance;
};
