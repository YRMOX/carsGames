#include "Vehicle/Controle.hpp"
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

      controle.carControle(mazdaMx5);
      mazdaMx5.update(config.frameRateLimit, 1, 0);
      loger.clear();
      mazdaMx5.print();

      sf::RectangleShape car(sf::Vector2f(10, 10));
      car.setPosition(mazdaMx5.position.x, 20);

      window.clear();
      window.draw(car);
      window.display();
  }
  return 0;
}
