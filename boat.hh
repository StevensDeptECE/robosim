#pragma once

#include <iostream>
#include "robot.hh"

/*
Tim Demetriades
12/16/2021
*/

/*
Boat inherits from robot base class in robot.hh and robot.cc.
*/

class boat : public robot {
private:
  double rudderAngle; // angle from 0 to 2pi (radians)
public:
  // Constructor
  boat(string name, const vec_3d& pos, double posVarHoriz,
       double posVarVert, double heading, double speed,
       double headingVert, double BatteryLife, double rudderAngle);
  
  // Set new rudder angle from 0 to 2pi (radians)
  void adjustRudderAngle(double angle);
};