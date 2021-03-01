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
  acceleration.y = 0;
  acceleration.z = 0;
  direction.x = 0;
  direction.y = 0;
  direction.z = direction.z + analogHorizontal;
  speed.x = formula.speed(acceleration.x, frameRate, speed.x);
  speed.y = formula.speed(acceleration.y, frameRate, speed.y);
  speed.z = formula.speed(acceleration.z, frameRate, speed.z);
  position.x = formula.position(acceleration.x, frameRate, speed.x, position.x);
  position.y = formula.position(acceleration.y, frameRate, speed.y, position.y);
  position.z = formula.position(acceleration.z, frameRate, speed.z, position.z);
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
  //loger.log((0*1*0*4.3/(0.5776/2)/0*1));
}
