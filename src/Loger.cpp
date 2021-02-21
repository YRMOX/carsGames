#include "../include/Loger.hpp"

Loger::Loger(){
    //cout << "\033[1;32m" << ">>Loger Construction<<" << "\033[0m\n";
}

Loger::~Loger(){
    //cout << "\033[1;31m" << "##Loger Destruction##" << "\033[0m\n";
}

void Loger::boolLog(bool boolean){
  if (boolean)
    cout << "true\n";
  else
    cout << "false\n";
}

void Loger::vector3Log(float x, float y, float z){
    cout << x << ", " << y << ", " << z << "\n";
}

void Loger::construct(const char* message){
  //cout << "\033[1;32m" << message << "\033[0m\n";
}

void Loger::destruct(const char* message){
  //cout << "\033[1;31m" << message << "\033[0m\n";
}

void Loger::clear(){
  FILE *fos = NULL;
  fos = fopen("ficher.txt", "a+");
  if (fos == NULL){
    system("cls");
  }
  else{
    system("clear");
  }
}
