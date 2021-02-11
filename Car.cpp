#include "Car.hpp"

Car::Car(float X, float Y, float Z){
	loger.construct(">>Car Construction<<");
    position.set(X, Y, Z);
    engine.turnOnOff();
}

Car::~Car(){
	loger.destruct("##Car Destruction##");
}

void Car::update(){
    
}

void Car::print(){
	position.print();
	engine.print();
}