#include "../include/Formula.hpp"

Formula::Formula(){
    loger.construct(">>Formula Construction<<");
}

Formula::~Formula(){
    loger.destruct("##Formula Destruction##");
}

float Formula::acceleration(float engineTorque, float clutch, float gearRatio, float difRatio, float wheelDiameter, float mass, float analogVertical){
  loger.log(engineTorque);
  loger.log(wheelDiameter);
  float acceleration = engineTorque*clutch*gearRatio*difRatio/(wheelDiameter/2)/mass*analogVertical;
    return acceleration;
}

float Formula::speed(float acceleration, int frameRate, float Speed){
	float speed = acceleration*3.6/frameRate+Speed;
    return speed;
}

void Formula::vetor3Speed(Vector3& acceleration, int frameRate, Vector3& speed){

}

float Formula::position(float acceleration, int frameRate, float speed, float Position){
	float position = acceleration/2/frameRate+speed/frameRate+Position;
    return position;
}

void Formula::vector3Position(Vector3& acceleration, int frameRate, Vector3& speed, Vector3& position){

}
