#include <thread>

#include "../include/Game.hpp"

#define sleep_for std::this_thread::sleep_for

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

void commande(Loger& loger, OS& os, Keyboard& keyboard, Car& car){
  if (true/*keyboard.ReadKey()*/){
    loger.log("OK");
  }
}

void Game::launch(){
  mazdaMx5.engine.turnOnOff();
  mazdaMx5.gearBox.changeGear('1');
  mazdaMx5.clutch = 0;
  while (true){
    commande(loger, os, keyboard, mazdaMx5);
    mazdaMx5.update(frameRate, 1, 0);
    loger.clear();
    mazdaMx5.print();
    using namespace std::literals::chrono_literals;
    sleep_for(17ms);
  }
}
