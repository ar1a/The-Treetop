#ifndef __GAME_HPP
#define __GAME_HPP

#include "sprite.hpp"

class Game
{
public:
  Game();
private:
  void game_loop();
  void draw();
  void update(float elapsed_time);
  Sprite player;
};

#endif //__GAME_HPP
