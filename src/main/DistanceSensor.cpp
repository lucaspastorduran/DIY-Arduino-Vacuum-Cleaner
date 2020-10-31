#include "DistanceSensor.h"

DistanceSensor::DistanceSensor(const String model) :
  Sensor(model)
{
}

DistanceSensor::~DistanceSensor()
{
}

void DistanceSensor::setMaxRange(const double maxRange)
{
  _maxRange = maxRange;
}

void DistanceSensor::setResolution(const double resolution)
{
  _resolution = resolution;
}

double DistanceSensor::getMaxRange() const
{
  return _maxRange;
}

double DistanceSensor::getResolution() const
{
  return _resolution;
}

double DistanceSensor::getDistance() const
{
  return _currentDistance;
}
