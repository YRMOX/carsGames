#include "../../include/Game.hpp"

Game::Game(){
  gearRatio[0] = -3.136;
  gearRatio[1] = 0;
  gearRatio[2] = 3.136;
  gearRatio[3] = 1.888;
  gearRatio[4] = 1.33;
  gearRatio[5] = 1;
  gearRatio[6] = 0.814;

  engineTorque[0] = 67.8;
  engineTorque[1] = 118.6;
  engineTorque[2] = 138.3;
  engineTorque[3] = 146.4;
  engineTorque[4] = 152;
  engineTorque[5] = 146.4;
  engineTorque[6] = 118.6;

  mazdaMx5.setProperties("mazda", "Mx5", 8.2, gearRatio, 4.3, engineTorque, 990, "185/60 R14 82H");
  loger.construct(">>Game Construction<<");
}

Game::~Game(){
  loger.destruct("##Game Destruction##");
}

void Game::launch(){
  mazdaMx5.print();
  mazdaMx5.engine.turnOnOff();
  mazdaMx5.print();
}
