#pragma once

#include <iostream>
#include "robot.hh"

class boat : public robot {
private:
  double x, y;
  double velX, velY;
  double rutter_angle;
public:
  Boat(double x, double y);
  void move();
};