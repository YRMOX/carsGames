#include "Car.hpp"

Car::Car(){
  acceleration.setAll(0);
	speed.setAll(0);
	position.setAll(0);
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
  position.setAll(0);
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
  direction.setAll(0);
  speed.setAll(0);
  position.setAll(0);
}

void Car::update(int frameRate, float analogVertical, float analogHorizontal){
  acceleration.x = formula.acceleration(engine.getTorque(), clutch, gearBox.getGearRatio(), difRatio, wheel.diameter, mass, analogVertical);
  direction.z = direction.z + analogHorizontal;
  speed = formula.vector3FSpeed(acceleration, frameRate, speed);
  position = formula.vector3FPosition(acceleration, frameRate, speed, position);
  engine.update(frameRate, wheel.rpm, gearBox.getGearRatio(), difRatio, clutch, analogVertical);
  wheel.update(speed.x);
}

void Car::print(){
  acceleration.print();
  direction.print();
  speed.print();
	position.print();
	engine.print();
  gearBox.print();
  wheel.print();
}
