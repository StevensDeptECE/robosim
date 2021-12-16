/*
    Author : Ming-Hung Yen and Aleksandar Dimoski and Tim Demetriades
*/
#pragma once
#include <vector>

#include "beacon.hh"
#include "vec_3d.hh"

class robot {
 private:
  string name, type;
  vec_3d location;
  vec_3d estLocation;
  double BatteryLife, posVarHoriz, posVarVert, heading, speed, headingVert;

 public:
  // Constructor
  robot(string name, double x, double y, double z, double posVarHoriz,
        double posVarVert, double heading, double speed, double headingVert,
        double BatteryLife = 100);

  robot(string name, const vec_3d& pos, double posVarHoriz, double posVarVert,
        double heading, double speed, double headingVert,
        double BatteryLife = 100);

  void move(double time);

  vec_3d getLocation() const { return location; }
  double getBatLife() const { return BatteryLife; }
  string getName() const { return name; }
  string getType() const { return type; }

  friend std::ostream& operator<<(std::ostream& a, robot& xyz);
  vec_3d getEstLocation(vector<beacon> beacons);
};
