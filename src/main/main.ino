#include "EngineController.h"
#include "SensorManager.h"
#include "VoltageSensor.h"

const int RIGHT_MOTOR_FWD = 3;
const int RIGHT_MOTOR_BACK = 2;
const int LEFT_MOTOR_FWD = 7;
const int LEFT_MOTOR_BACK = 6;

const int BATTERY_PIN = A0;

VoltageSensor* batteryVoltage;

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

  // initialize voltage sensor
  batteryVoltage = new ArduinoVoltageSensor(BATTERY_PIN);

  // initialize all objects needed to control the Robot
  engineController = new EngineController(LEFT_MOTOR_FWD, LEFT_MOTOR_BACK, RIGHT_MOTOR_FWD, RIGHT_MOTOR_BACK);
}

// the loop routine runs over and over again forever:
void loop() {

  // read batteries voltage
  Serial.println(batteryVoltage->getInfo());
  
  engineController->moveRobot(MotorDirection::FORWARD, 100.0);
  Serial.println(engineController->getInfo());
  delay(5000);

  Serial.println(batteryVoltage->getInfo());
  
  engineController->moveRobot(MotorDirection::LEFT);
  engineController->setSpeed(99.0);
  Serial.println(engineController->getInfo());
  delay(5000);

  Serial.println(batteryVoltage->getInfo());

  engineController->stopRobot();
  Serial.println(engineController->getInfo());
  delay(5000);

  Serial.println(batteryVoltage->getInfo());

  engineController->moveRobot(MotorDirection::RIGHT, 95.0);
  Serial.println(engineController->getInfo());
  delay(5000);

  Serial.println(batteryVoltage->getInfo());

  engineController->moveRobot(MotorDirection::BACKWARD);
  Serial.println(engineController->getInfo());
  delay(5000);

  Serial.println(batteryVoltage->getInfo());
  
  engineController->stopRobot();
  Serial.println(engineController->getInfo());
  delay(5000);
}
