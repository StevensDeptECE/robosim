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
  void estimate_loc();

 public:
  beacon(std::string name, double x, double y, double z);

  vec_3d getLoc() const;
  vec_3d get_est_loc() const;

  friend std::ostream& operator<<(std::ostream& s, beacon a);
};
