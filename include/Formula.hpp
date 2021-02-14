#ifndef FORMULA_HPP
#define FORMULA_HPP

#include"Loger.hpp"

struct Formula{
private:
    Loger loger;
public:
    Formula();
    ~Formula();
    float acceleration(float engineTorque, float clutch, float gearRatio, float difRatio, float wheelDiameter, float mass, float analogVertical);
    float speed(float acceleration, int frameRate, float speed);
    float position(float acceleration, int frameRate, float speed, float position);
};

#endif
