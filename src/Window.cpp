#include "../include/Window.hpp"

Window::Window(){
  loger.construct(">>Window Construction<<");
}

Window::~Window(){
  loger.destruct("##Window Destruction##");
}

void Window::setProperties(int height, int width, const char* name){
  window.create(sf::VideoMode(height, width), name);
}

void Window::launchWindow(){
  while (window.isOpen()){
    sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }
    window.clear();
    window.display();
  }
}
