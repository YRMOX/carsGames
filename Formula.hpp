#ifndef FORMULA_HPP
#define FORMULA_HPP

#include"Loger.hpp"

struct Formula{
private:
    Loger loger;
public:
    Formula();
    ~Formula();
    float acceleration();
    float speed();
    float position();
};

#endif