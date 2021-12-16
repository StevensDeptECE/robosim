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
<<<<<<< HEAD
  beacon(std::string name, double x, double y, double z, 
       double localError, double rangeError);
  beacon(std::string name, vec_3d location, double localError,
         double rangeError);
=======
  beacon(std::string name, double x, double y, double z);

  vec_3d getLoc() const;
  vec_3d get_est_loc() const;
>>>>>>> 9c4d3d17b51fc6259b44aca1bd30c8ce871f29f0

  friend std::ostream& operator<<(std::ostream& s, const beacon& a);
};
