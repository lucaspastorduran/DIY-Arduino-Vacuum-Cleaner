#pragma once

#include "WheelMotor.h"

enum MotorDirection
{
  STOP,
  FORWARD,
  BACKWARD,
  LEFT,
  RIGHT
};

class HardwareMapping {
 public:
  HardwareMapping() = delete;
  HardwareMapping(const int leftForwardPin, const int leftBackwardPin,
                  const int rightForwardPin, const int rightBackwardPin);
  ~HardwareMapping();
  
  void sendToMotors(MotorDirection direction, const double speed);

 private:
  WheelMotor* _leftMotor;
  WheelMotor* _rightMotor;
};
