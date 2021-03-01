#include "GearBox.hpp"

GearBox::GearBox(const char* Name, float* GearRatio){
  name = Name;
  gearRatio = GearRatio;
}

void GearBox::setProperties(const char* Name, float* GearRatio){
  name = Name;
  gearRatio = GearRatio;
}

void GearBox::setGearRatio(float* GearRatio){
  gearRatio = GearRatio;
}

void GearBox::changeGear(char Gear){ gear = Gear; }

float GearBox::getGearRatio(){
  switch (gear) {
    case 'R':
      return *gearRatio;
      break;
    case '1':
      return *(gearRatio + 2);
      break;
    case '2':
      return *(gearRatio + 3);
      break;
    case '3':
      return *(gearRatio + 4);
      break;
    case '4':
      return *(gearRatio + 5);
      break;
    case '5':
      return *(gearRatio + 6);
      break;
    default:
      return *(gearRatio + 1);
  }
}

void GearBox::print(){
  loger.log(gear);
}
