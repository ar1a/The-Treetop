#ifndef __GRAPHICS_hpp
#define __GRAPHICS_hpp

#include <SFML/Graphics.hpp>
#include <memory>

class Graphics
{
public:
  Graphics();
  void draw(sf::Drawable& drawable);
  void display();
  
  void clear();
  void update(float elapsed_time);
  sf::Texture load_image(const std::string& file_name);
  sf::RenderWindow* get_window();

private:
  std::unique_ptr<sf::RenderWindow> window;
  std::map<std::string, sf::Texture> textures;
};

extern Graphics graphics;

#endif //__GRAPHICS_hpp
