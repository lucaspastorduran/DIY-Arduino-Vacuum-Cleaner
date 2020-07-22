#include "EngineController.h"

const int POSITIVE_PIN = 11;
const int NEGATIVE_PIN = 12;

EngineController* engineController;

// the setup routine runs once when you press reset:
void setup() {                
  
  // initialize the digital pin as an output.
  pinMode(POSITIVE_PIN, OUTPUT);   
  pinMode(NEGATIVE_PIN, OUTPUT);   

  // initialize all objects needed to control the Robot
  engineController = new EngineController();
}

// the loop routine runs over and over again forever:
void loop() {
  engineController->setSpeed(100.0);
  engineController->moveRobot(MotorDirection::FORWARD);
  delay(1000);
  
  engineController->moveRobot(MotorDirection::LEFT);
  delay(1000);

  engineController->stopRobot();
  delay(1000);

  engineController->moveRobot(MotorDirection::RIGHT, 50.0);
  delay(1000);

  engineController->moveRobot(MotorDirection::BACKWARD);
  delay(1000);
  
  engineController->stopRobot();
}
