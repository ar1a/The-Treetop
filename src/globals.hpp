#ifndef __GLOBALS_hpp
#define __GLOBALS_hpp

#include <string>

/* Limeoats uses const varibles inside a namespace but preprocesser variables are better.*/

constexpr int SCREEN_WIDTH = 800;
constexpr int SCREEN_HEIGHT = 600;
constexpr auto GAME_TITLE = "The Treetop";

/* we use enum class so we MUST do Direction::foo
 * the only problem is, we have to manually make bitwise operators*/
enum class Direction {
  LEFT,
  RIGHT,
  UP,
  DOWN,
  NONE,
};

namespace sides {
  enum class Side {
    TOP,
    BOTTOM,
    LEFT,
    RIGHT,
    NONE,
  };
  Side get_opposite_side(const Side& side);
}

#endif //__GLOBALS_hpp
