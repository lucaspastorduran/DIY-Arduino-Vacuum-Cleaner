#pragma once

#include "HardwareMapping.h"

#include <WString.h>

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

  double getSpeed() const;
  String getDirection() const;
  String getInfo() const;

 private:
  MotorDirection _direction;
  double _speed;

  HardwareMapping* _hardwareMapping;
};
