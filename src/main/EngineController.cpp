#include "EngineController.h"

EngineController::EngineController(
    const int leftForwardPin, const int leftBackwardPin,
    const int rightForwardPin, const int rightBackwardPin) :
  _direction(MotorDirection::STOP),
  _speed(0.0)
{
  _hardwareMapping = new HardwareMapping(leftForwardPin, leftBackwardPin,
                                         rightForwardPin, rightBackwardPin);
}

EngineController::~EngineController()
{
  delete _hardwareMapping;
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

void EngineController::sendToMotors()
{
  _hardwareMapping->sendToMotors(_direction, _speed);
}
