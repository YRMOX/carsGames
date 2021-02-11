#include <iostream>

#include "Loger.hpp"

#define cout std::cout
#define endl std::endl

Loger::Loger(){
    //cout << "\033[1;32m" << ">>Loger Construction<<" << "\033[0m" << endl;
}

Loger::~Loger(){
    //cout << "\033[1;31m" << "##Loger Destruction##" << "\033[0m" << endl;
}

void Loger::log(const char* message){
    cout << message << endl;
}

void Loger::construct(const char* message){
    cout << "\033[1;32m" << message << "\033[0m" << endl;
}

void Loger::destruct(const char* message){
    cout << "\033[1;31m" << message << "\033[0m" << endl;
}