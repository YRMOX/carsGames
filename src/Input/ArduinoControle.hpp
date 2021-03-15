#ifndef ARDUINOCONTROLE_HPP
#define ARDUINOCONTROLE_HPP

#include "../Vehicle/Car.hpp"
#include "../Loger.hpp"
#include "../libserial/SerialPort.h"

#include <string>
#include <SFML/Graphics.hpp>

struct ArduinoControle{
  Loger loger;
  LibSerial::SerialPort serialPort;
  char tempChar;
  std::string value;
  int analogVerticalValue;
  int analogHorizontalValue;
  int clutchValue;
  ArduinoControle();
  ~ArduinoControle();
  void carControle(Car& car);
};

#endif
