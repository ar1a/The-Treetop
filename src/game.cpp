#include "game.hpp"
#include "graphics.hpp"

constexpr auto FPS = 60;
constexpr auto MAX_FRAME_TIME =  1000 / FPS;

Game::Game() : player("content/spritesheets/characters.png", {0, 0}, {16, 16}, {50, 50})
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
    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Escape)) {
      graphics.get_window()->close(); //todo: replace with pause menu
    }
    update(std::min(clock.restart().asMilliseconds(), MAX_FRAME_TIME));
    draw();
  }
}

void Game::draw()
{
  graphics.clear();
  //Draw here
  player.draw();
  graphics.display();
}

void Game::update(float elapsed_time)
{
  graphics.update(elapsed_time);
}
