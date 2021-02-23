#include "../include/Controle.hpp"

Controle::Controle(){
  loger.construct(">>Controle Construction<<");
}

Controle::~Controle(){
  loger.destruct("##Controle Destruction##");
}

void Controle::carControle(Car& car){
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)){
    if (keySwitch[0]){
      car.engine.turnOnOff();
      keySwitch[0] = false;
    }

  }else{
    keySwitch[0] = true;
  }
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    car.clutch = 0;
  else
    car.clutch = 1;
}
