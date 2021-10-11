#include "beacon.hh"

#include <iostream>
#include <string>

#include "vec_3d.hh"

// Authors: Anastasios Zochios, Pavlos Tziranis

beacon::beacon(std::string name, vec_3d location, double localError = 0.05,
               double rangeError)
    : name(name),
      location(location),
      localError(localError),
      rangeError(rangeError) {}

// beacon::double detect_object(double power);
/* Adding a scalar to a vector; vec_3d operator+ needs to initialize a scalar as
 * vector */
friend ostream& operator<<(ostream& s, beacon a) {
  return s << a.name << a.location + a.localError;