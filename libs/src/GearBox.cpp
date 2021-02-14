#include "../../include/GearBox.hpp"

GearBox::GearBox(float* GearRatio){
  gearRatio = GearRatio;
  loger.construct(">>GearBox Construction<<");
}

GearBox::~GearBox(){
  loger.destruct("##GearBox Destruction##");
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
}
