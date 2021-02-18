#include "../../include/Car.hpp"

Car::Car(){
  acceleration.setAll(0);
	speed.setAll(0);
	position.setAll(0);
	loger.construct(">>Car Construction<<");
}

Car::Car(const char* Brand, const char* Model, float ZeroToHundred, float* gearRatioAdress, float DifRatio, float* engineTorqueAdress, int Mass, const char* tire){
  brand = Brand;
  model = Model;
  zeroToHundred = ZeroToHundred;
  gearBox.setProperties("NA6A", gearRatioAdress);
  difRatio = DifRatio;
  wheel.setTireReference(tire);

  acceleration.setAll(0);
  speed.setAll(0);
  position.setAll(0);
  loger.construct(">>Car Construction<<");
}

Car::~Car(){
	loger.destruct("##Car Destruction##");
}

void Car::setProperties(const char* Brand, const char* Model, float ZeroToHundred, float* gearRatioAdress, float DifRatio, float* engineTorqueAdress, int Mass, const char* tire){
  brand = Brand;
  model = Model;
  zeroToHundred = ZeroToHundred;
  gearBox.setProperties("NA6A", gearRatioAdress);
  difRatio = DifRatio;
  wheel.setTireReference(tire);

  acceleration.setAll(0);
  speed.setAll(0);
  position.setAll(0);
}

void Car::update(int frameRate, float analogVertical, float analogHorizontal){
  loger.log("####debug####");
  loger.log(engine.getTorque());
  loger.log(clutch);
  loger.log(gearBox.getGearRatio());
  loger.log(difRatio);
  loger.log(wheel.diameter);
  loger.log(mass);
  loger.log(analogVertical);
  acceleration.x = formula.acceleration(engine.getTorque(), clutch, gearBox.getGearRatio(), difRatio, wheel.diameter, mass, analogVertical);
  acceleration.y = 0;
  acceleration.z = analogHorizontal;
  speed.x = 0;
  speed.y = 0;
  speed.z = 0;
  position.x = 0;
  position.y = 0;
  position.z = 0;
}

void Car::print(){
  acceleration.print();
  speed.print();
	position.print();
	engine.print();
  gearBox.print();
  wheel.print();
}
