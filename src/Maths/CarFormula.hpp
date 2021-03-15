#ifndef CARFORMULA_HPP
#define CARFORMULA_HPP

#include "../Loger.hpp"
#include "Vector3F.hpp"

struct CarFormula{
  Loger loger;
  float acceleration(float engineTorque, float clutch, float gearRatio, float difRatio, float wheelDiameter, float mass);
  float speed(float acceleration, int frameRate, float speed);
  Vector3F vector3FSpeed(Vector3F& acceleration, int frameRate, Vector3F& speed);
  float position(float acceleration, int frameRate, float speed, float position);
  Vector3F vector3FPosition(Vector3F& acceleration, int frameRate, Vector3F& speed, Vector3F& position);
  Vector3F vector3FPosition2(Vector3F& acceleration, float deltaTime, Vector3F& speed, Vector3F& direction, Vector3F& position);
};

#endif
