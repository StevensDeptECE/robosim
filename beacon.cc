#include "beacon.hh"

#include <iostream>
#include <string>

#include "random.hh"
#include "vec_3d.hh"

using namespace std;

<<<<<<< HEAD
beacon::beacon(std::string name, double x, double y, double z, double localError, double rangeError) : name(name), location(x,y,z), localError(localError), rangeError(rangeError) {}

beacon::beacon(std::string name, vec_3d location, double localError = 0.05,
               double rangeError)
    : name(name),
      location(location),
      localError(localError),
      rangeError(rangeError) {}

// beacon::double detect_object(double power);
/* Adding a scalar to a vector; vec_3d operator+ needs to initialize a scalar as
 * vector */
std::ostream& operator<<(std::ostream& s, const beacon& a) {
  return s << a.name << a.location + a.localError;
=======
// Collaborators Pavlos Tziranis, Aldrin Padua and Anastasios Zochios

beacon::beacon(string name, double x, double y, double z)
    : name(name), location(vec_3d(x, y, z)) {}

// outputs the estimated location of the beacon updated with a normally
// distrubuted error with mean=0 & std.dev = 2
void beacon::estimate_loc() {
  vec_3d error(N(0, 2), N(0, 2), N(0, 2));
  estlocation = location + error;
}

vec_3d beacon::getLoc() const { return location; };
vec_3d beacon::get_est_loc() const { return estlocation; };

ostream& operator<<(ostream& s, beacon a) {
  return s << a.name << ' ' << a.location << ' ' << a.estlocation;
>>>>>>> 9c4d3d17b51fc6259b44aca1bd30c8ce871f29f0
}