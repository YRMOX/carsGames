#include "Engine.hpp"

Engine::Engine(float* EngineTorque){
  engineTorque = EngineTorque;
}

void Engine::setProperties(float* EngineTorque){
  engineTorque = EngineTorque;
}

void Engine::turnOnOff(){
  if (engineState)
      engineState = false;
  else
      engineState = true;
}

void Engine::update(int frameRate, float wheelRpm, float gearRatio, float difRatio, float clutch, float analogVertical){
  if (engineState){
    if (clutch == 1)
      rpm = wheelRpm * gearRatio * difRatio * analogVertical;
    else
      rpm = rpm + 7000/(clutch+1)/frameRate;
  } else
    rpm = 0;
}

float Engine::getTorque(){
  if (engineState){
    if (rpm >= 7000)
      return 0;
    if (rpm == 7000)
      return *(engineTorque + 6);
    else if (rpm >= 6000)
      return *(engineTorque + 5);
    else if (rpm >= 5000)
      return *(engineTorque + 4);
    else if (rpm >= 4000)
      return *(engineTorque + 3);
    else if (rpm >= 3000)
      return *(engineTorque + 2);
    else if (rpm >= 2000)
      return *(engineTorque + 1);
    else if (rpm >= 1000)
      return *engineTorque;
    else
      return 0;
  } else
    return 0;
}

void Engine::print(){
  loger.boolLog(engineState);
  loger.log(rpm);
}
