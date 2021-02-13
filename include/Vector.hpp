#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "Loger.hpp"

struct Vector{
    Loger loger;
    int x;
    int y;
    int z;
    Vector();
    Vector(float x, float y, float z);
	~Vector();
	void set(float x, float y, float z);
	void setOrigin();
    void print();
};
#endif
