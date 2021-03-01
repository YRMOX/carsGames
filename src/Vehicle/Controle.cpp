#include "Controle.hpp"

void Controle::carControle(Car& car){
  
  //engineState
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::S)){
    if (keySwitch[0]){
      car.engine.turnOnOff();
      keySwitch[0] = false;
    }

  } else {
    keySwitch[0] = true;
  }

  //clutch
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Space))
    car.clutch = 0;
  else
    car.clutch = 1;

  //gearBox
  if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::R)){
    car.gearBox.changeGear('R');
  } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num0)){
    car.gearBox.changeGear('N');
  } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num1)){
    car.gearBox.changeGear('1');
  } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num2)){
    car.gearBox.changeGear('2');
  } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num3)){
    car.gearBox.changeGear('3');
  } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num4)){
    car.gearBox.changeGear('4');
  } else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::Num5)){
    car.gearBox.changeGear('5');
  }
}
