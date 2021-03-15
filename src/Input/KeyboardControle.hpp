#ifndef KEYBOARDCONTROLE_HPP
#define KEYBOARDCONTROLE_HPP

#include "../Vehicle/Car.hpp"

#include <SFML/Graphics.hpp>

struct KeyboardControle{
  bool keySwitch[1];
public:
  void carControle(Car& car);
};

#endif
