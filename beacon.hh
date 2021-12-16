#pragma once

#include <iostream>
#include <string>

#include "vec_3d.hh"

class beacon {
 private:
  std::string name;
  vec_3d location, estlocation;
  double localError, rangeError;

 public:
  beacon(std::string name, double x, double y, double z, 
       double localError, double rangeError);
  beacon(std::string name, vec_3d location, double localError,
         double rangeError);

  friend std::ostream& operator<<(std::ostream& s, const beacon& a);
};
