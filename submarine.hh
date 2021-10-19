#pragma once

#include <iostream>
#include "robot.hh"
#include "vec_3d.hh"

class submarine : public robot {
private:
  vec_3d pos;
  vec_3d vel;
  uint16_t max_speed;
  int32_t max_depth;
  bool beached;
public:
  Submarine(vec_3d pos, vec_3d vel);
  void move();
};
