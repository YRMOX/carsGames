#ifndef VECTOR3F_HPP
#define VECTOR3F_HPP

#include "../Loger.hpp"

struct Vector3F{
  float x;
  float y;
  float z;
  Vector3F();
  Vector3F(float X, float Y, float Z);
  void set(float X, float Y, float Z);
  void setAll(float value);
  void setOrigin();
  void print();
private:
  Loger loger;
};
#endif
