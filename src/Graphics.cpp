#include "../include/Graphics.hpp"

Graphics::Graphics(){
  loger.construct(">>Graphics Construction<<");
}

Graphics::~Graphics(){
  loger.destruct("##Graphics Destruction##");
}
