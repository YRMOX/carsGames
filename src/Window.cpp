#include "../include/Window.hpp"

/*Window::Window(): thread(&Window::launchWindow, this){
  loger.construct(">>Window Construction<<");
}*/

Window::~Window(){
  loger.destruct("##Window Destruction##");
}

void Window::setProperties(int height, int width, const char* name){
  window.create(sf::VideoMode(height, width), name);
  //thread.launch();
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
