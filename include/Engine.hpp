#ifndef ENGINE_HPP
#define ENGINE_HPP

#include "Loger.hpp"

struct Engine{
private:
    Loger loger;
    float* engineTorque;
    bool engineState;
    float rpm;
public:
    Engine();
    Engine(float* EngineTorque);
    ~Engine();
    void turnOnOff();
    void update(float wheelRpm, float gearRatio, float difRatio, float analogVertical);
    float getTorque();
    void print();
};

#endif
