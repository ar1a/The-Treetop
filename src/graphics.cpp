#include "graphics.hpp"
#include "globals.hpp"

Graphics graphics;

Graphics::Graphics()
{
  init();
}

void Graphics::init()
{
  window = new sf::RenderWindow{{SCREEN_WIDTH, SCREEN_HEIGHT}, GAME_TITLE};
}

void Graphics::draw()
{
  window->clear();
  window->display();
}

void Graphics::update(float elapsed_time)
{
 
}

sf::RenderWindow* Graphics::get_window()
{
  return window;
}
