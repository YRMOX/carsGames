#include "CarFormula.hpp"

float CarFormula::acceleration(float engineTorque, float clutch, float gearRatio, float difRatio, float wheelDiameter, float mass, float analogVertical){
  float acceleration = engineTorque*clutch*gearRatio*difRatio/(wheelDiameter/2)/mass*analogVertical;
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
