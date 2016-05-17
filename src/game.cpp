#include "game.hpp"
#include "graphics.hpp"

#define FPS 60
#define MAX_FRAME_TIME 1000 / FPS

Game::Game()
{
  game_loop();
}

void Game::game_loop()
{
  sf::Clock clock;
  while(graphics.get_window()->isOpen()) {
    sf::Event event;
    while(graphics.get_window()->pollEvent(event)) {
      if(event.type == sf::Event::Closed)
        graphics.get_window()->close();
    }

    update(std::min(clock.restart().asMilliseconds(), MAX_FRAME_TIME));
    draw();
  }
}

void Game::draw()
{
  graphics.draw();
}

void Game::update(float elapsed_time)
{
  graphics.update(elapsed_time);
}
