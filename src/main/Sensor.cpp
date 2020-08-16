#include "Sensor.h"

Sensor::Sensor(const String model) :
  _model(model)
{
}

Sensor::~Sensor()
{
}

SensorType Sensor::getType() const
{
  return _type;
}

String Sensor::getModel() const
{
  return _model;
}
