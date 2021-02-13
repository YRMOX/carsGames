#include <iostream>

#include "../../include/Engine.hpp"

Engine::Engine(){
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

void Engine::print(){
    std::cout << engineState << std::endl;
}
