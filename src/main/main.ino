#include "EngineController.h"

const int LEFT_MOTOR_FWD = 2;
const int LEFT_MOTOR_BACK = 3;
const int RIGHT_MOTOR_FWD = 6;
const int RIGHT_MOTOR_BACK = 7;

EngineController* engineController;

// the setup routine runs once when you press reset:
void setup() {
  
  // initialize the digital pin as an output.
  pinMode(LEFT_MOTOR_FWD, OUTPUT);   
  pinMode(LEFT_MOTOR_BACK, OUTPUT);
  pinMode(RIGHT_MOTOR_FWD, OUTPUT);   
  pinMode(RIGHT_MOTOR_BACK, OUTPUT);

  // Serial communicaions for Debug
  Serial.begin(9600);

  // initialize all objects needed to control the Robot
  engineController = new EngineController(LEFT_MOTOR_FWD, LEFT_MOTOR_BACK, RIGHT_MOTOR_FWD, RIGHT_MOTOR_BACK);
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
  Serial.println("Move direction at speed " + String(engineController->getSpeed()));
  delay(1000);
}
