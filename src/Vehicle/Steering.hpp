#ifndef STEERING_HPP
#define STEERING_HPP

struct Steering{
  float steerAngle;
  float update(float analogHorizontal, float speed, float grip, float deltaTime);
};

#endif
