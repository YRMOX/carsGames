#include "../../include/Wheel.hpp"

Wheel::Wheel(char* TireReference){
  tireReference = TireReference;
  tireWidth = 185;
  tirePercent = 60;
  tireSize = 14;
  diameter = (tireWidth*(tirePercent/100)*2+tireSize*25.4)/1000;
  perimeter = 3.142*(diameter/2)*2;
  loger.construct(">>Wheel Construction<<");
}

Wheel::~Wheel(){
  loger.destruct("##Wheel Destruction##");
}

void Wheel::update(float carSpeed){
  rpm = carSpeed/perimeter;
}

void Wheel::print(){
  //loger.log((char*)tireWidth);
}
