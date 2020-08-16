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
    Sensor(const String model);
    ~Sensor();

    SensorType getType() const;
    String getModel() const;

  private:
    SensorType _type;
    const String _model;
};
