#pragma once

#include "vec_3d.hh"

class beacon {
 private:
  vec_3d location, estlocation;
  double localError, rangeError, power;

 public:
  beacon(vec_3d location, double localError, double rangeError);

  double detect_object(double power);
};
