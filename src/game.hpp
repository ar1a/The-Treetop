#ifndef __GAME_HPP
#define __GAME_HPP

#include "sprite.hpp"

class Game
{
public:
  Game();
  void game_loop();
private:
  void draw();
  void update(float elapsed_time);
  Sprite player;
};

#endif //__GAME_HPP
