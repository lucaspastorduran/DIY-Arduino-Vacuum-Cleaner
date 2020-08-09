#pragma once

class WheelMotor
{
  public:
    WheelMotor() = delete;
    WheelMotor(const int forwardPin, const int backwardPin);
    void moveForward(const double speed);
    void moveBackward(const double speed);
    void stopMoving();
    
  private:
    const int FORWARD_PIN;
    const int BACKWARD_PIN;
};
