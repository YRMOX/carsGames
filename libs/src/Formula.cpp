#include "../../include/Formula.hpp"

Formula::Formula(){
    loger.construct(">>Formula Construction<<");
}

Formula::~Formula(){
    loger.destruct("##Formula Destruction##");
}

float Formula::acceleration(){
	float acceleration = 0;
    return acceleration;
}

float Formula::speed(){
	float speed = 0;
    return speed;
}

float Formula::position(){
	float position = 0;
    return position;
}
