#include "game.hpp"
#include "graphics.hpp"

Game::Game()
{
  game_loop();
}

void Game::game_loop()
{
  while(graphics.get_window()->isOpen()) {
    sf::Event event;
    while(graphics.get_window()->pollEvent(event)) {
      if(event.type == sf::Event::Closed)
        graphics.get_window()->close();
    }

    update(1.0f);
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
