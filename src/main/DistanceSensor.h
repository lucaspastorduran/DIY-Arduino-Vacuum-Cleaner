#pragma once

#include <Sensor.h>

Class DistanceSensor : public Sensor
{
  public:
    DistanceSensor();
    ~DistanceSensor();

    double getMaxRange() const;
    double getDistance() const;

  private:
    const double maxRange;
    double currentDistance;
}
