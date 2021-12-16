#include "beacon.hh"

#include <iostream>
#include <string>

#include "random.hh"
#include "vec_3d.hh"

using namespace std;

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

ostream& operator<<(ostream& s, beacon a) {
  return s << a.name << ' ' << a.location << ' ' << a.estlocation;
}