#ifndef APPLICATION_HPP
#define APPLICATION_HPP

#include "Loger.hpp"
#include "Config.hpp"
#include "Input/KeyboardControle.hpp"
#include "Input/ArduinoControle.hpp"
#include "Vehicle/Car.hpp"
#include <SFML/Graphics.hpp>

class Application{
  sf::Clock clock;
  Loger loger;
  Config config;
  KeyboardControle keyboardControle;
  ArduinoControle arduinoControle;
  Car mazdaMx5;
  sf::Time deltaTime;
  sf::RenderWindow window;
public:
  Application(Config& Config);
  int runApp();
};

#endif
