#include "Application.hpp"

Application::Application(Config& Config){
  config = Config;
  window.create(sf::VideoMode(config.height, config.width), config.name.c_str());

  mazdaMx5.setProperties("mazda", "Mx5", 8.2, config.NA6A, 4.3, config.B6ZERS, 990, "185/60 R14 82H");
}

int Application::runApp(){
  window.setFramerateLimit(config.frameRateLimit);
  while (window.isOpen())
  {
      sf::Event event;
      while (window.pollEvent(event))
      {
          if (event.type == sf::Event::Closed)
              window.close();
      }
      sf::Time deltaTime = clock.getElapsedTime();
      float frameRate = 1 / deltaTime.asSeconds();
      clock.restart();

      keyboardControle.carControle(mazdaMx5);
      arduinoControle.carControle(mazdaMx5);
      mazdaMx5.update(config.frameRateLimit, deltaTime.asSeconds());
      //loger.clear();
      //mazdaMx5.print();

      sf::RectangleShape car(sf::Vector2f(20, 10));
      car.setOrigin(car.getSize().x/2, car.getSize().y/2);
      car.setRotation(mazdaMx5.direction.z/3.14*180);
      car.setPosition(mazdaMx5.position.x, mazdaMx5.position.y);

      window.clear();
      window.draw(car);
      window.display();
  }
  return 0;
}
