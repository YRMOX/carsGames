#ifndef GAME_HPP
#define GAME_HPP

#include "Loger.hpp"
#include "Car.hpp"

class Game{
  Loger loger;
  Car carTest = Car(1, 2, 3);
public:
  Game();
  ~Game();
  void launch();
};

#endif
