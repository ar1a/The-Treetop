#ifndef __SPRITE_hpp
#define __SPRITE_hpp

#include <SFML/Graphics.hpp>
#include "globals.hpp"

class Sprite
{
public:
  Sprite(const std::string& file_name, sf::Vector2i src_pos, sf::Vector2i size, sf::Vector2f dest_pos);
  Sprite(const Sprite&) = delete;
  Sprite& operator=(const Sprite&) = delete;
  virtual void update(float elapsed_time);
  void draw();
  sf::IntRect get_bounding_box() const;
  sides::Side get_collision_side(const sf::IntRect& other) const;


private:
  sf::Sprite sprite;
  sf::Texture texture;
};

#endif //__SPRITE_hpp
