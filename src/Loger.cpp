#include "Loger.hpp"

void Loger::boolLog(bool boolean){
  if (boolean)
    cout << "true\n";
  else
    cout << "false\n";
}

void Loger::vector3FLog(float x, float y, float z){
    cout << x << ", " << y << ", " << z << "\n";
}

void Loger::clear(){
  FILE *fos = NULL;
  fos = fopen("Config.yaml", "a+");
  if (fos == NULL){
    system("cls");
  }
  else{
    system("clear");
  }
}
