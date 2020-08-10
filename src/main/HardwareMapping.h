#pragma once

#include "WheelMotor.h"

#include <WString.h>

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
  
  void setSpeed(const double speed);
  void setDirection(const MotorDirection direction);
  void moveMotors(const MotorDirection direction, const double speed);
  void stopMotors();

  double getSpeed() const;
  String getDirection() const;

 private:
  void sendToMotors(MotorDirection direction, const double speed);
 
  MotorDirection _direction;
  double _speed;
  
  WheelMotor* _leftMotor;
  WheelMotor* _rightMotor;
};
