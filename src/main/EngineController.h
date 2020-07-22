#pragma once

enum MotorDirection
{
  STOP,
  FORWARD,
  BACKWARD,
  LEFT,
  RIGHT
};

class EngineController {
 
 public:
  EngineController();

  void setSpeed(const double speed);
  
  void moveRobot(const MotorDirection direction);
  void moveRobot(const MotorDirection direction, const double speed);
  
  void stopRobot();
  
 private:
  MotorDirection _direction;
  double _speed;
};
