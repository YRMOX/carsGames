#ifndef LOGER_HPP
#define LOGER_HPP

#include <iostream>

#define cout std::cout
#define endl std::endl

struct Loger{
    Loger();
    ~Loger();
    template<typename T>
    void log(T message){ cout << message << endl; }
    void boolLog(bool boolean);
    void vector3Log(float x, float y, float z);
    void construct(const char* message);
    void destruct(const char* message);
};
#endif
