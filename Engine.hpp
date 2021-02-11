#ifndef ENGINE_HPP
#define ENGINE_HPP

#include "Loger.hpp"

struct Engine{
private:
    float engineTorque;
    bool engineState;
    float rpm;
    Loger loger;
public:
    Engine();
    ~Engine();
    void turnOnOff();
    //void update();
    //void getTorque();
    void print();
};

#endif