#ifndef CAR_HPP
#define CAR_HPP

#include "Loger.hpp"
#include "Formula.hpp"
#include "Wheel.hpp"
#include "Vector.hpp"
#include "Engine.hpp"
#include "GearBox.hpp"

class Car{
  Loger loger;
  Formula formula;
  const char* brand;
  const char* model;
  float zeroToHundred;
  float difRatio;
  Wheel wheel;
  float clutch = 1;
  int mass;
  Vector acceleration;
  Vector speed;
  Vector position;
public:
  Engine engine;
  GearBox gearbox;
  Car();
  Car(const char* Brand, const char* Model, float ZeroToHundred, float* gearRatioAdress, float DifRatio, float* engineTorqueAdress, int Mass, const char* tire);
  ~Car();
  void setProperties(const char* Brand, const char* Model, float ZeroToHundred, float* gearRatioAdress, float DifRatio, float* engineTorqueAdress, int Mass, const char* tire);
  void update();
  void print();
};
#endif
