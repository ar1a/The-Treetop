#include "graphics.hpp"

Graphics graphics;

Graphics::Graphics()
{
  init();
}

void Graphics::init()
{
  window = new sf::RenderWindow{{800, 600}, "The Treetop"};
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
