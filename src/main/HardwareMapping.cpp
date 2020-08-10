#include "HardwareMapping.h"

HardwareMapping::HardwareMapping(
    const int leftForwardPin, const int leftBackwardPin,
    const int rightForwardPin, const int rightBackwardPin) :
  _speed(0.0),
  _direction(MotorDirection::STOP)
{
  _leftMotor = new WheelMotor(leftForwardPin, leftBackwardPin);
  _rightMotor = new WheelMotor(rightForwardPin, rightBackwardPin);
}

HardwareMapping::~HardwareMapping()
{
  delete _leftMotor;
  delete _rightMotor;
}

void HardwareMapping::setSpeed(const double speed)
{
  _speed = speed;
  sendToMotors(_direction, _speed);
}

void HardwareMapping::setDirection(const MotorDirection direction)
{
  _direction = direction;
  sendToMotors(_direction, _speed);
}

void HardwareMapping::moveMotors(const MotorDirection direction, const double speed)
{
  _speed = speed;
  _direction = direction;
  sendToMotors(_direction, _speed);
}

void HardwareMapping::stopMotors()
{
  _speed = 0.0;
  _direction = MotorDirection::STOP;
  sendToMotors(_direction, _speed);
}

double HardwareMapping::getSpeed() const
{
  return _speed;
}

String HardwareMapping::getDirection() const
{
  String result = "";
  
  switch (_direction)
  {
    case MotorDirection::FORWARD:
      result = "FORWARD";
      break;
    case MotorDirection::BACKWARD:
      result = "BACKWARD";
      break;
    case MotorDirection::LEFT:
      result = "LEFT";
      break;
    case MotorDirection::RIGHT:
      result = "RIGHT";
      break;
    case MotorDirection::STOP:
      result = "STOP";
      break;
    default:
      result = "NOT_DEFINED";
  }

  return result;
}

void HardwareMapping::sendToMotors(MotorDirection direction, const double speed)
{
    switch (direction)
  {
    case MotorDirection::FORWARD:
      _leftMotor->moveForward(speed);
      _rightMotor->moveForward(speed);
      break;
    case MotorDirection::BACKWARD:
      _leftMotor->moveBackward(speed);
      _rightMotor->moveBackward(speed);
      break;
    case MotorDirection::LEFT:
      _leftMotor->moveBackward(speed);
      _rightMotor->moveForward(speed);
      break;
    case MotorDirection::RIGHT:
      _leftMotor->moveForward(speed);
      _rightMotor->moveBackward(speed);
      break;
    case MotorDirection::STOP:
      // fallthrough
    default:
      _leftMotor->stopMoving();
      _rightMotor->stopMoving();
  }
}
