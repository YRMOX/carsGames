#ifndef CONFIG_HPP
#define CONFIG_HPP

#include <string>

struct Config{
  int height, width = 200;
  std::string name = "";
  bool fullScreen = false;
  int frameRateLimit = 60;
  float NA6A[7];
  float B6ZERS[7];
  void importConfig();
};

#endif
