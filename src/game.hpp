#ifndef __GAME_HPP
#define __GAME_HPP

class Game
{
public:
  Game();
private:
  void game_loop();
  void draw();
  void update(float elapsed_time);
};

#endif //__GAME_HPP
