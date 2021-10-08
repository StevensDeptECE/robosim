#pragma once
#include <iostream>
#include <string>
#include "robot.hh"

//Should inherit from robot
class airplane : public robot {
  public:
  airplane(const string& name, double x, double y, double z) : name(name), x(x), y(y), z(z) {}

  friend std::ostream& operator <<(ostream& s, const airplane& a);
};