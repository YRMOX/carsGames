#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <string>

struct Config{
  int height, width = 200;
  std::string name = "";
  bool fullScreen = false;
  void importConfig();
};

#endif
