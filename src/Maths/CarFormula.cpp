#include "CarFormula.hpp"

#include <math.h>

float CarFormula::acceleration(float engineTorque, float clutch, float gearRatio, float difRatio, float wheelDiameter, float mass){
  float acceleration = engineTorque*clutch*gearRatio*difRatio/(wheelDiameter/2)/mass;
    return acceleration;
}

float CarFormula::speed(float acceleration, int frameRate, float Speed){
	float speed = acceleration*3.6/frameRate+Speed;
    return speed;
}

Vector3F CarFormula::vector3FSpeed(Vector3F& acceleration, int frameRate, Vector3F& speed){
  speed.x = this->speed(acceleration.x, frameRate, speed.x);
  speed.y = this->speed(acceleration.y, frameRate, speed.y);
  speed.z = this->speed(acceleration.z, frameRate, speed.z);
  return speed;
}

float CarFormula::position(float acceleration, int frameRate, float speed, float Position){
	float position = acceleration/2/frameRate+speed/frameRate+Position;
  return position;
}

Vector3F CarFormula::vector3FPosition(Vector3F& acceleration, int frameRate, Vector3F& speed, Vector3F& position){
  position.x = this->position(acceleration.x, frameRate, speed.x, position.x);
  position.y = this->position(acceleration.y, frameRate, speed.y, position.y);
  position.z = this->position(acceleration.z, frameRate, speed.z, position.z);
  return position;
}

Vector3F CarFormula::vector3FPosition2(Vector3F& acceleration, float deltaTime, Vector3F& speed, Vector3F& direction, Vector3F& position){
  position.x = acceleration.x/2*deltaTime*deltaTime+speed.x*deltaTime*cos(direction.z)+acceleration.y/2*deltaTime*deltaTime+speed.y*deltaTime*sin(direction.z)+position.x;
  position.y = acceleration.y/2*deltaTime*deltaTime+speed.y*deltaTime*cos(direction.z)+acceleration.x/2*deltaTime*deltaTime+speed.x*deltaTime*sin(direction.z)+position.y;
  return position;
}
