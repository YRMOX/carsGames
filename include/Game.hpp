#ifndef GAME_HPP
#define GAME_HPP

#include "Loger.hpp"
#include "Car.hpp"

class Game{
  Loger loger;
  int frameRate = 60;
  float gearRatio[7];
  float difRatio = 4.3;
  float engineTorque[7];
  Car mazdaMx5;
public:
  Game();
  ~Game();
  void launch();
};

#endif
