#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "Loger.hpp"
#include "Vehicle/Controle.hpp"
#include "Vehicle/Car.hpp"
#include <SFML/Graphics.hpp>

class Application{
  sf::Clock clock;
  Loger loger;
  Controle controle;
  int frameRate = 60;
  float gearRatio[7];
  float difRatio = 4.3;
  float engineTorque[7];
  Car mazdaMx5;
  sf::Time deltaTime;
  sf::RenderWindow window;
public:
  Application(int height, int width, const char* name);
  int runApp();
};

#endif
