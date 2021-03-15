#ifndef WHEEL_HPP
#define WHEEL_HPP

#include "../Loger.hpp"

struct Wheel{
    Loger loger;
    const char* tireReference;
    float tireWidth;
    float tirePercent;
    float tireSize;
    float grip;
    float diameter;
    float perimeter;
    float rpm;
    Wheel(){}
    Wheel(const char* TireReference);
    void setTireReference(const char* TireReference);
    void update(float carSpeed);
    void print();
};
#endif
