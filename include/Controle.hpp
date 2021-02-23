#ifndef CONTROLE_HPP
#define CONTROLE_HPP

#include "Loger.hpp"
#include "Car.hpp"

#include <SFML/Graphics.hpp>

struct Controle{
  Loger loger;
  bool keySwitch[1];
public:
  Controle();
  ~Controle();
  void carControle(Car& car);
};

#endif
