#ifndef CAR_HPP
#define CAR_HPP

#include "Loger.hpp"
#include "Vector.hpp"
#include "Formula.hpp"
#include "Engine.hpp"

class Car{
    Loger loger;
    Formula formula;
    Vector position;
    Engine engine;
public:
    Car(float X, float Y, float Z);
    ~Car();
    void update();
	void print();
};
#endif
