#include "Car.hpp"

#include <math.h>

Car::Car(){
  acceleration.setAll(0);
	speed.setAll(0);
  direction.setAll(0);
	position.set(0, 20, 0);
}

Car::Car(const char* Brand, const char* Model, float ZeroToHundred, float* gearRatioAdress, float DifRatio, float* engineTorqueAdress, int Mass, const char* tire){
  brand = Brand;
  model = Model;
  zeroToHundred = ZeroToHundred;
  engine.setProperties(engineTorqueAdress);
  gearBox.setProperties("NA6A", gearRatioAdress);
  difRatio = DifRatio;
  wheel.setTireReference(tire);
  mass = Mass;

  acceleration.setAll(0);
  speed.setAll(0);
  direction.setAll(0);
  position.set(0, 20, 0);
}

void Car::setProperties(const char* Brand, const char* Model, float ZeroToHundred, float* gearRatioAdress, float DifRatio, float* engineTorqueAdress, int Mass, const char* tire){
  brand = Brand;
  model = Model;
  zeroToHundred = ZeroToHundred;
  engine.setProperties(engineTorqueAdress);
  gearBox.setProperties("NA6A", gearRatioAdress);
  difRatio = DifRatio;
  wheel.setTireReference(tire);
  mass = Mass;

  acceleration.setAll(0);
  speed.setAll(0);
  direction.setAll(0);
  position.set(0, 20, 0);
}

void Car::update(int frameRate, float deltaTime){
  acceleration.x = formula.acceleration(engine.getTorque(), clutch, gearBox.getGearRatio(), difRatio, wheel.diameter, mass);
  speed = formula.vector3FSpeed(acceleration, frameRate, speed);
  if (direction.z > 6.28){
    direction.z = 0;
  }
  if (direction.z < 0){
    direction.z = 6.28;
  }
  direction.z += steering.update(analogHorizontal, speed.x, wheel.grip, deltaTime);
  position = formula.vector3FPosition2(acceleration, deltaTime, speed, direction, position);
  engine.update(frameRate, wheel.rpm, gearBox.getGearRatio(), difRatio, clutch, analogVertical);
  wheel.update(speed.x);
}

void Car::print(){
  acceleration.print();
  speed.print();
  direction.print();
	position.print();
	engine.print();
  gearBox.print();
  wheel.print();
}
