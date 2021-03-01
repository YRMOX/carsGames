#ifndef CAR_HPP
#define CAR_HPP

#include "../Loger.hpp"
#include "../Maths/CarFormula.hpp"
#include "../Maths/Vector3F.hpp"
#include "Wheel.hpp"
#include "Engine.hpp"
#include "GearBox.hpp"

class Car{
  Loger loger;
  CarFormula formula;
  const char* brand;
  const char* model;
  float zeroToHundred;
  float difRatio;
  Wheel wheel;
  int mass;
  Vector3F acceleration;
  Vector3F direction;
  Vector3F speed;
public:
  Vector3F position;
  Engine engine;
  float clutch = 1;
  GearBox gearBox;
  Car();
  Car(const char* Brand, const char* Model, float ZeroToHundred, float* gearRatioAdress, float DifRatio, float* engineTorqueAdress, int Mass, const char* tire);
  void setProperties(const char* Brand, const char* Model, float ZeroToHundred, float* gearRatioAdress, float DifRatio, float* engineTorqueAdress, int Mass, const char* tire);
  void update(int frameRate, float analogVertical, float analogHorizontal);
  void print();
};
#endif
