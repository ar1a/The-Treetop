#include "sprite.hpp"
#include "graphics.hpp"
#include <cmath>

Sprite::Sprite(const std::string& file_name, sf::Vector2i src_pos, sf::Vector2i size, sf::Vector2f dest_pos)
{
  texture = graphics.load_image(file_name); //TODO: handle errors
  sprite = sf::Sprite{texture, {src_pos.x, src_pos.y, size.x, size.y}};
  sprite.setPosition(dest_pos);
}

void Sprite::draw()
{
  graphics.draw(sprite);
}

void Sprite::update(float elapsed_time) {} //TODO: make pure virtual


sf::IntRect Sprite::get_bounding_box() const 
{
  return sf::IntRect{(int)sprite.getPosition().x, (int)sprite.getPosition().y, sprite.getTextureRect().width, sprite.getTextureRect().height};
}

sides::Side Sprite::get_collision_side(const sf::IntRect& other) const
{
  auto b = get_bounding_box();
  int delta_right = (b.left + b.width) - other.left;
  int delta_left = (other.left + other.width) - b.left;
  int delta_top = (other.top + other.height) - b.top;
  int delta_bottom = (b.top + b.height) - other.top;

  int lowest = std::min({delta_right, delta_left, delta_top, delta_bottom});
  //ternary operators shouldnt be used here, if statements will be optimized better and is
  //better practice
  if (lowest == abs(delta_right)) return sides::Side::RIGHT;
  if (lowest == abs(delta_left)) return sides::Side::LEFT;
  if (lowest == abs(delta_top)) return sides::Side::TOP;
  if (lowest == abs(delta_bottom)) return sides::Side::BOTTOM;


  return sides::Side::NONE;
}
