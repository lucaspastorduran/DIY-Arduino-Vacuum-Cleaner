#pragma once

#include "Sensor.h"

#include <WString.h>

class DistanceSensor : public Sensor
{
  public:
    DistanceSensor(const String model);
    ~DistanceSensor();

    void setMaxRange(const double maxRange);
    void setResolution(const double resolution);

    double getMaxRange() const;
    double getResolution() const;
    
    double getDistance() const;

  private:
    double _maxRange;
    double _resolution;
    
    double _currentDistance;
};
