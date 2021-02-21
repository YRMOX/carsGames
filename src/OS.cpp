#include "../include/OS.hpp"

OS::OS(){
  FILE *fos = NULL;
  fos = fopen("ficher.txt", "a+");
  if (fos == NULL){
    name = "Windows";
  }
  else{
    name = "Linux";
  }
  loger.construct(">>OS Construction<<");
}

OS::~OS(){
  loger.destruct("##OS Destruction##");
}
