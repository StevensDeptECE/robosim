#pragma once
#include <iostream>
#include <string>

#include "robot.hh"

// Should inherit from robot
class airplane : public robot {
 private:
  std::string name;

 public:
  airplane(const std::string& name, double x, double y, double z)
      : robot(x, y, z, 100), name(name) {}

  friend std::ostream& operator<<(std::ostream& s, const airplane& a);
};