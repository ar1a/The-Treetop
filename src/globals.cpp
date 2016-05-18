#include "globals.hpp"

sides::Side sides::get_opposite_side(const sides::Side& side)
{
  switch(side) {
    case Side::BOTTOM: return Side::TOP;
    case Side::TOP: return Side::BOTTOM;
    case Side::LEFT: return Side::RIGHT;
    case Side::RIGHT: return Side::LEFT;
    default: return Side::NONE;
  }
}
