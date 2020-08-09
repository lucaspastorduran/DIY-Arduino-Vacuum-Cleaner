#pragma once

#include "HardwareMapping.h"

class EngineController {
 
 public:
  EngineController() = delete;
  EngineController(const int leftForwardPin, const int leftBackwardPin,
                   const int rightForwardPin, const int rightBackwardPin);
  ~EngineController();

  void setSpeed(const double speed);
  void moveRobot(const MotorDirection direction);
  void moveRobot(const MotorDirection direction, const double speed);
  void stopRobot();

 private:
  MotorDirection _direction;
  double _speed;

  void sendToMotors();

  HardwareMapping* _hardwareMapping;
};
