#include "EngineController.h"

EngineController::EngineController() :
  _direction(MotorDirection::STOP),
  _speed(0.0)
{
}

void EngineController::setSpeed(const double speed)
{
  _speed = speed;
}

void EngineController::moveRobot(const MotorDirection direction)
{
  _direction = direction;
}

void EngineController::moveRobot(const MotorDirection direction, const double speed)
{
  _speed = speed;
  _direction = direction;
}

void EngineController::stopRobot()
{
  _speed = 0;
  _direction = MotorDirection::STOP;
}
