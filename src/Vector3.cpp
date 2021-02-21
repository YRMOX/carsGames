#include "../include/Vector3.hpp"

Vector3::Vector3(){
	loger.construct(">>Vector3 Construction<<");
	x = 0;
	y = 0;
	z = 0;
}

Vector3::Vector3(float X, float Y, float Z){
	loger.construct(">>Vector3 Construction<<");
	x = X;
	y = Y;
	z = Z;
}

Vector3::~Vector3(){
	loger.destruct("##Vector Destruction##");
}

void Vector3::set(float X, float Y, float Z){
  x = X;
  y = Y;
  z = Z;
}

void Vector3::setAll(float value){ x, y, z = value; }

void Vector3::setOrigin(){
	x = 0;
	y = 0;
	z = 0;
}

void Vector3::print(){
		loger.vector3Log(x, y, z);
}
