#include "../../include/Loger.hpp"

Loger::Loger(){
    //cout << "\033[1;32m" << ">>Loger Construction<<" << "\033[0m" << endl;
}

Loger::~Loger(){
    //cout << "\033[1;31m" << "##Loger Destruction##" << "\033[0m" << endl;
}

void Loger::boolLog(bool boolean){
  if (boolean)
    cout << "true" << endl;
  else
    cout << "false" << endl;
}

void Loger::vector3Log(float x, float y, float z){
    cout << x << ", " << y << ", " << z << endl;
}

void Loger::construct(const char* message){
    //cout << "\033[1;32m" << message << "\033[0m" << endl;
}

void Loger::destruct(const char* message){
    //cout << "\033[1;31m" << message << "\033[0m" << endl;
}
