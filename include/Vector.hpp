#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "Loger.hpp"

struct Vector{
    Loger loger;
    int x;
    int y;
    int z;
    Vector();
    Vector(float X, float Y, float Z);
    ~Vector();
    void set(float X, float Y, float Z);
    void setAll(float value);
    void setOrigin();
    void print();
};
#endif
