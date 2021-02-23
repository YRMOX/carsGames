#ifndef WINDOW_HPP
#define WINDOW_HPP

#include "Loger.hpp"
#include "Graphics.hpp"

#include <SFML/Graphics.hpp>

struct Window{
  Loger loger;
  sf::RenderWindow window;
  Graphics graphics;
  Window(): thread(&Window::launchWindow, this){ loger.construct(">>Window Construction<<"); }
  ~Window();
  void setProperties(int height, int width, const char* name);
private:
  void launchWindow();
  sf::Thread thread;
};

#endif
