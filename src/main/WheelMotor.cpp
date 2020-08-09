#include "WheelMotor.h"

#include "Arduino.h"

WheelMotor::WheelMotor(const int forwardPin, const int backwardPin) :
  FORWARD_PIN(forwardPin),
  BACKWARD_PIN(backwardPin)
{
}

void WheelMotor::moveForward(const double speed)
{
  analogWrite(BACKWARD_PIN, 0);
  analogWrite(FORWARD_PIN, speed);
}

void WheelMotor::moveBackward(const double speed)
{
  analogWrite(BACKWARD_PIN, speed);
  analogWrite(FORWARD_PIN, 0);
}

void WheelMotor::stopMoving()
{
  analogWrite(BACKWARD_PIN, 0);
  analogWrite(FORWARD_PIN, 0);
}
