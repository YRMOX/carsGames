#include "../../include/Engine.hpp"

Engine::Engine(){
  loger.construct(">>Engine Construction<<");
}

Engine::Engine(float* EngineTorque){
  engineTorque = EngineTorque;
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
          rpm = wheelRpm * gearRatio * difRatio * analogVertical;
  }
}

float Engine::getTorque(){
  if (rpm >= 7000)
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
}

void Engine::print(){
  loger.boolLog(engineState);
}
