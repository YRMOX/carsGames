#ifndef KEYBOARD_HPP
#define KEYBOARD_HPP

#include "Loger.hpp"
#include "OS.hpp"
#include <iostream>
#include <fstream>
#include <cstring>
#include <linux/input.h>

struct Keyboard{
  Loger loger;
  OS os;
  //ifstream file;
  struct input_event event;
  Keyboard();
  ~Keyboard();
  /*bool ReadKey();*/
};

#endif
