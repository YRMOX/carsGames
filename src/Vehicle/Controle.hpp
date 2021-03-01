#ifndef CONTROLE_HPP
#define CONTROLE_HPP

#include "Car.hpp"

#include <SFML/Graphics.hpp>

struct Controle{
  bool keySwitch[1];
public:
  void carControle(Car& car);
};

#endif
