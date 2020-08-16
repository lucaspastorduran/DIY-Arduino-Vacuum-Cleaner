#pragma once

#include <WString.h>

enum SensorType
{
  DISTANCE,
  CONTACT,
  VELOCITY,
  ACCELERATION
};

class Sensor
{
  public:
    Sensor();
    ~Sensor();

    SensorType getType() const;
    String getModel() const;

  private:
    SensorType _type;
    String _model;
};
