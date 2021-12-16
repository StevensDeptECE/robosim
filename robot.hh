/*
    Author : Ming-Hung Yen and Aleksandar Dimoski
*/
#pragma once

#include <vector>

#include "beacon.hh"
#include "vec_3d.hh"

class robot {
 private:
  string name;
  vec_3d location;
  vec_3d estLocation;
  double BatteryLife, posVarHoriz, posVarVert, heading, speed, headingVert;

 public:
  robot(string name, double x, double y, double z, double posVarHoriz,
        double posVarVert, double heading, double speed, double headingVert,
        double BatteryLife);

  robot(string name, const vec_3d& pos, double posVarHoriz, double posVarVert,
        double heading, double speed, double headingVert, double BatteryLife);

  void move(double time);
  vec_3d getEstLocation(vector<beacon> beacons);

  vec_3d getLocation() const { return location; }
  double getBatLife() const { return BatteryLife; }
  string getName() const { return name; }

  friend std::ostream& operator<<(std::ostream& a, robot& xyz);
};
