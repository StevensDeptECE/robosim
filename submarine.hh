#pragma once

#include <iostream>
#include "robot.hh"

class submarine : public robot {
private:
  double x, y;
  double velX, velY;
public:
  Submarine(double x, double y);
  void move();
};
