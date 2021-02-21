#ifndef OS_HPP
#define OS_HPP

#include "Loger.hpp"

#define cout std::cout

struct OS{
  Loger loger;
  const char* name;
  OS();
  ~OS();
};
#endif
