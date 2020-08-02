#pragma once

enum SensorType
{
  DISTANCE,
  CONTACT,
  VELOCITY,
  ACCELERATION
};

Class Sensor
{
  public:
    Sensor();
    ~Sensor();

    SensorType getType() const;
    std::string getModel() const;

  private:
    SensorType _type;
    std::string _model;
};
