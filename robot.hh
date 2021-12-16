/*
    Author : Ming-Hung Yen
*/

#include "beacon.hh"
#include "vec_3d.hh"

extern beacon TestBeacon;

class robot {
 protected:
  vec_3d location;
  double BatteryLife;

 public:
  robot(double x, double y, double z, double BatteryLife)
      : location(x, y, z), BatteryLife(BatteryLife) {}

  friend std::ostream& operator<<(std::ostream& a, const robot& xyz);
};
