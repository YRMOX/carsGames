#include "Vehicle/Controle.hpp"
#include "Application.hpp"

Application::Application(int height, int width, const char* name){
  window.create(sf::VideoMode(height, width), name);

  gearRatio[0] = -3.136;
  gearRatio[1] = 0;
  gearRatio[2] = 3.136;
  gearRatio[3] = 1.888;
  gearRatio[4] = 1.33;
  gearRatio[5] = 1;
  gearRatio[6] = 0.814;

  engineTorque[0] = 67.8;
  engineTorque[1] = 118.6;
  engineTorque[2] = 138.3;
  engineTorque[3] = 146.4;
  engineTorque[4] = 152;
  engineTorque[5] = 146.4;
  engineTorque[6] = 118.6;

  mazdaMx5.setProperties("mazda", "Mx5", 8.2, gearRatio, 4.3, engineTorque, 990, "185/60 R14 82H");
}

int Application::runApp(){
  window.setFramerateLimit(60);
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

      mazdaMx5.gearBox.changeGear('1');
      controle.carControle(mazdaMx5);
      mazdaMx5.update(60, 1, 0);
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
