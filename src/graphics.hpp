#ifndef __GRAPHICS_hpp
#define __GRAPHICS_hpp

#include <SFML/Graphics.hpp>

class Graphics
{
public:
  Graphics();
  void init();
  void draw();
  void update(float elapsed_time);
  sf::RenderWindow* get_window();

private:
  sf::RenderWindow* window;
};

extern Graphics graphics;

#endif //__GRAPHICS_hpp
