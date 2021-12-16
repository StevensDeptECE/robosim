#pragma once

#include <iostream>
#include <string>

#include "random.hh"
#include "vec_3d.hh"

class beacon {
 private:
  std::string name;
  vec_3d location;  // the real location of the beacon in the simulation (ground
                    // truth)
  vec_3d estlocation;  // the location the beacon believes it is in (with error,
                       // as in real life)
                       // double localError;
                       // double rangeError;
  void estimate_loc();

 public:
  beacon(std::string name, vec_3d location);

  friend std::ostream& operator<<(std::ostream& s, beacon a);
};
