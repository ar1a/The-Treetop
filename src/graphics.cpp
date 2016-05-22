#include "graphics.hpp"
#include "globals.hpp"

Graphics graphics;

Graphics::Graphics()
{
  init();
}

void Graphics::init()
{
  window = std::unique_ptr<sf::RenderWindow>(new sf::RenderWindow{{SCREEN_WIDTH, SCREEN_HEIGHT}, GAME_TITLE});
}

void Graphics::draw(sf::Drawable& drawable)
{
  window->draw(drawable);
}

void Graphics::update(float elapsed_time)
{
 
}

sf::RenderWindow* Graphics::get_window()
{
  return window.get();
}


void Graphics::clear()
{
  window->clear();
}

void Graphics::display()
{
  window->display();
}

sf::Texture Graphics::load_image(const std::string& file_name)
{
  if(textures.count(file_name) == 0) {
    sf::Texture texture;
    if(!texture.loadFromFile(file_name)) {
      throw std::runtime_error(file_name + " not found");
    }
    textures[file_name] = texture;
  }

  return textures[file_name];
}
