#ifndef WHEEL_HPP
#define WHEEL_HPP

#include "Loger.hpp"

struct Wheel{
    Loger loger;
    char* tireReference;
    float tireWidth;
    float tirePercent;
    float tireSize;
    float diameter;
    float perimeter;
    float rpm;
    Wheel(char* TireReference);
    ~Wheel();
    void update(float carSpeed);
    void print();
};
#endif
