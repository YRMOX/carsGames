#ifndef FORMULA_HPP
#define FORMULA_HPP

#include "Loger.hpp"
#include "Vector3.hpp"

struct Formula{
  Formula();
  ~Formula();
  float acceleration(float engineTorque, float clutch, float gearRatio, float difRatio, float wheelDiameter, float mass, float analogVertical);
  float speed(float acceleration, int frameRate, float speed);
  void vetor3Speed(Vector3& acceleration, int frameRate, Vector3& speed);
  float position(float acceleration, int frameRate, float speed, float position);
  void vector3Position(Vector3& acceleration, int frameRate, Vector3& speed, Vector3& position);
private:
  Loger loger;
};

#endif
