#include "../../include/Vector.hpp"

Vector::Vector(){
	loger.construct(">>Vector Construction<<");
	x = 0;
	y = 0;
	z = 0;
}

Vector::Vector(float X, float Y, float Z){
	loger.construct(">>Vector Construction<<");
	x = X;
	y = Y;
	z = Z;
}

Vector::~Vector(){
	loger.destruct("##Vector Destruction##");
}

void Vector::set(float X, float Y, float Z){
    x = X;
    y = Y;
    z = Z;
}

void Vector::setOrigin(){
	x = 0;
	y = 0;
	z = 0;
}

void Vector::print(){
		loger.vectorLog(x, y, z);
}
