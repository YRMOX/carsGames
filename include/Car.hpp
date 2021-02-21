#ifndef CAR_HPP
#define CAR_HPP

#include "Loger.hpp"
#include "Formula.hpp"
#include "Wheel.hpp"
#include "Vector3.hpp"
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
  int mass;
  Vector3 acceleration;
  Vector3 direction;
  Vector3 speed;
  Vector3 position;
public:
  Engine engine;
  float clutch = 1;
  GearBox gearBox;
  Car();
  Car(const char* Brand, const char* Model, float ZeroToHundred, float* gearRatioAdress, float DifRatio, float* engineTorqueAdress, int Mass, const char* tire);
  ~Car();
  void setProperties(const char* Brand, const char* Model, float ZeroToHundred, float* gearRatioAdress, float DifRatio, float* engineTorqueAdress, int Mass, const char* tire);
  void update(int frameRate, float analogVertical, float analogHorizontal);
  void print();
};
#endif
