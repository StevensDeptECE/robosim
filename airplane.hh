#pragma once
#include <iostream>
#include <string>
#include "robot.hh"

//Should inherit from robot
class airplane : public robot {
  public:
  airplane(std::string name, int32_t x, int32_t y, int32_t z) : name(name), x(x), y(y), z(z) {}

  friend std::ostream& operator <<(ostream& s, const airplane& a);
};