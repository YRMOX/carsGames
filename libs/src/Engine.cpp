#include <iostream>

#include "../../include/Engine.hpp"

Engine::Engine(const float* engineTorque){
    loger.construct(">>Engine Construction<<");
}

Engine::~Engine(){
    loger.destruct("##Engine Destruction##");
}

void Engine::turnOnOff(){
    if (engineState)
        engineState = false;
    else
        engineState = true;
}

void Engine::update(float wheelRpm, float gearRatio, float difRatio, float analogVertical){
    if (engineState){
        if (rpm < 7000)
            rpm = wheelRpm*gearRatio*difRatio*analogVertical;
    }
}

float Engine::getTorque(){
    if (rpm >= 7000)
        return engineTorque[6];
    if (rpm >= 6000)
        return engineTorque[5];
    if (rpm >= 5000)
        return engineTorque[4];
    if (rpm >= 4000)
        return engineTorque[3];
    if (rpm >= 3000)
        return engineTorque[2];
    if (rpm >= 2000)
        return engineTorque[1];
    if (rpm >= 1000)
        return engineTorque[0];
    if (rpm < 1000)
        return 0;
}

void Engine::print(){
    std::cout << engineState << std::endl;
}
