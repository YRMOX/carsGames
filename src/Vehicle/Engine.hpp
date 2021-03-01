#ifndef ENGINE_HPP
#define ENGINE_HPP

#include "../Loger.hpp"

struct Engine{
private:
  Loger loger;
  float* engineTorque;
  bool engineState = false;
  float rpm;
public:
  Engine(){}
  Engine(float* EngineTorque);
  void setProperties(float* EngineTorque);
  void turnOnOff();
  void update(int frameRate, float wheelRpm, float gearRatio, float difRatio, float clutch, float analogVertical);
  float getTorque();
  void print();
};

#endif
