#ifndef GEARBOX_HPP
#define GEARBOX_HPP

#include "Loger.hpp"

struct GearBox{
    Loger loger;
    char gear;
    float* gearRatio;
    GearBox(float* GearRatio);
    ~GearBox();
    void changeGear(char Gear);
    float getGearRatio();
    void print();
};
#endif
