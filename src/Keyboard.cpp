#include "../include/Keyboard.hpp"

Keyboard::Keyboard(){

}

Keyboard::~Keyboard(){

}

/*bool Keyboard::ReadKey(){
  file.open("/dev/input/event1");
  char data[sizeof(event)];
  if(file.is_open()) {
    file.read(data, sizeof(event));
    memcpy(&event, data, sizeof(event));
    if(event.type == EV_KEY) {
      if(event.code == KEY_ESC) {
        return true;
      } else {
        return false;
      }
    }
  }
}*/
