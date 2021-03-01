#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "Loger.hpp"
#include "Config.hpp"
#include "Vehicle/Controle.hpp"
#include "Vehicle/Car.hpp"
#include <SFML/Graphics.hpp>

class Application{
  sf::Clock clock;
  Loger loger;
  Config config;
  Controle controle;
  Car mazdaMx5;
  sf::Time deltaTime;
  sf::RenderWindow window;
public:
  Application(Config& Config);
  int runApp();
};

#endif
