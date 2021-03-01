#include "Vector3F.hpp"

Vector3F::Vector3F(){
	x = 0;
	y = 0;
	z = 0;
}

Vector3F::Vector3F(float X, float Y, float Z){
	x = X;
	y = Y;
	z = Z;
}

void Vector3F::set(float X, float Y, float Z){
  x = X;
  y = Y;
  z = Z;
}

void Vector3F::setAll(float value){ x, y, z = value; }

void Vector3F::setOrigin(){
	x = 0;
	y = 0;
	z = 0;
}

void Vector3F::print(){
		loger.vector3FLog(x, y, z);
}
