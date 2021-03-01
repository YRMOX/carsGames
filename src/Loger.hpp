#ifndef LOGER_HPP
#define LOGER_HPP

#include <iostream>

#define cout std::cout

struct Loger{
    template<typename T>
    void log(T message){ cout << message << "\n"; }
    void boolLog(bool boolean);
    void vector3Log(float x, float y, float z);
    void clear();
};
#endif
