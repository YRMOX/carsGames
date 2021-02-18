#ifndef VECTOR3_HPP
#define VECTOR3_HPP

#include "Loger.hpp"

struct Vector3{
  int x;
  int y;
  int z;
  Vector3();
  Vector3(float X, float Y, float Z);
  ~Vector3();
  void set(float X, float Y, float Z);
  void setAll(float value);
  void setOrigin();
  void print();
private:
  Loger loger;
};
#endif
