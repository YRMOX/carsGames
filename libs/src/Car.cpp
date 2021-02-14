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
  gearbox.setProperties("NA6A", gearRatioAdress);
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
  acceleration.setAll(0);
	speed.setAll(0);
	position.setAll(0);
}

void Car::update(){

}

void Car::print(){
  acceleration.print();
  speed.print();
	position.print();
	engine.print();
}
