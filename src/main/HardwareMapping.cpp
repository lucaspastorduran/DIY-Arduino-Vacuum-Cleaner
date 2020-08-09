#include "HardwareMapping.h"

HardwareMapping::HardwareMapping(
    const int leftForwardPin, const int leftBackwardPin,
    const int rightForwardPin, const int rightBackwardPin)
{
  _leftMotor = new WheelMotor(leftForwardPin, leftBackwardPin);
  _rightMotor = new WheelMotor(rightForwardPin, rightBackwardPin);
}

HardwareMapping::~HardwareMapping()
{
  delete _leftMotor;
  delete _rightMotor;
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
