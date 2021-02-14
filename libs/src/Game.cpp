#include "../../include/Game.hpp"

Game::Game(){
  loger.construct(">>Game Construction<<");
}

Game::~Game(){
  loger.destruct("##Game Destruction##");
}

void Game::launch(){
  carTest.print();
}
