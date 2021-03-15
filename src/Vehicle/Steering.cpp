#include "Steering.hpp"

float Steering::update(float analogHorizontal, float speed, float grip, float deltaTime){
  steerAngle = 0.79 * analogHorizontal;
  if (steerAngle * speed/10 < grip && steerAngle * speed/10 > -grip){
    return steerAngle * speed/10 * deltaTime;
  } else {
    return 0;
  }
}
