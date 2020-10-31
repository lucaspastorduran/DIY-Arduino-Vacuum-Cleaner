#pragma once

#include <WString.h>

const int MAX_ANALOG_VALUE = 1023;

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
