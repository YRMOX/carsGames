#ifndef GEARBOX_HPP
#define GEARBOX_HPP

#include "Loger.hpp"

struct GearBox{
    Loger loger;
    char gear = 'N';
    float* gearRatio;
    const char* name;
    GearBox();
    GearBox(const char* name, float* GearRatio);
    ~GearBox();
    void setProperties(const char* Name, float* GearRatio);
    void setGearRatio(float* GearRatio);
    void changeGear(char Gear);
    float getGearRatio();
    void print();
};
#endif
