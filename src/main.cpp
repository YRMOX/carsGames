#include "Loger.hpp"
#include "Config.hpp"
#include "Application.hpp"

#include <SFML/Graphics.hpp>

int main()
{
  Loger loger;
  Config config;
  config.importConfig();
  Application game(config.height, config.width, config.name.c_str());
  return game.runApp();
}
