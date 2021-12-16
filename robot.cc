/*
Author:Wang,YenHsiang and Aleksandar Dimoski
version : 1.1
date : Dec 16th, 2021
*/
#include "robot.hh"

#include <vector>

#include "beacon.hh"

robot::robot(string name, double x, double y, double z, double posVarHoriz,
             double posVarVert, double heading, double speed,
             double headingVert, double BatteryLife = 100)
    : name(name),
      location(vec_3d(x, y, z)),
      posVarHoriz(posVarHoriz),
      posVarVert(posVarVert),
      heading(heading),
      speed(speed),
      headingVert(headingVert),
      BatteryLife(BatteryLife) {}

robot::robot(string name, const vec_3d& pos, double posVarHoriz,
             double posVarVert, double heading, double speed,
             double headingVert, double BatteryLife = 100)
    : name(name),
      location(pos),
      posVarHoriz(posVarHoriz),
      posVarVert(posVarVert),
      heading(heading),
      speed(speed),
      headingVert(headingVert),
      BatteryLife(BatteryLife) {}

void robot::move(double time) {
  double velX = time * speed * cos(heading);
  double velY = time * speed * sin(heading);
  double velZ = time * headingVert;
  location.x += velX;
  location.y += velY;
  location.z += velZ;
}

vec_3d robot::getEstLocation(vector<beacon> beacons) {
  vector<double> dists;
  for (beacon b : beacons) {
    dists.push_back(location.dist(b));
  }
  // TODO Calculate estimated position and return it; for now just returns
  // actual position
  return location;
}

std::ostream& robot::operator<<(std::ostream& s, robot& r) {
  s << "The object " << r.getName() << " is "
    << "Location= " << r.getLocation() << "\tBattery Life= " << r.getBatLife()
    << endl;
  return s;
}
