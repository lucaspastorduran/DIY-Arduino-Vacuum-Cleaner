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
  _hardwareMapping->setSpeed(speed);
}

void EngineController::moveRobot(const MotorDirection direction)
{
  _hardwareMapping->setDirection(direction);
}

void EngineController::moveRobot(const MotorDirection direction, const double speed)
{
  _hardwareMapping->moveMotors(direction, speed);
}

void EngineController::stopRobot()
{
  _hardwareMapping->stopMotors();
}

double EngineController::getSpeed() const
{
  return _hardwareMapping->getSpeed();
}

String EngineController::getDirection() const
{
  return _hardwareMapping->getDirection();
}

String EngineController::getInfo() const
{
  String message;
  message = "Moving " + _hardwareMapping->getDirection() + " at speed " + String(_hardwareMapping->getSpeed());

  return message;
}
