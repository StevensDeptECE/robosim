// Irakli Okruashvili
#pragma once
#include <iostream>
#include <string>

#include "robot.hh"
#include "vec_3d.hh"

class quadcopter : public robot {
 private:
  vec_3d direction, location;
  double throttle, roll, pitch, yaw, airSpeed;

 public:
  quadcopter(std::string name, double x, double y, double z, double posVarHoriz,
             double posVarVert, double heading, double speed,
             double headingVert, double BatteryLife);

  quadcopter(std::string name, const vec_3d& pos, double posVarHoriz,
             double posVarVert, double heading, double speed,
             double headingVert, double BatteryLife);
  void move(double time);
  void calculateDir();
  void setThrottle(double h) { throttle = h; }
  void setRoll(double r) { roll = r; }
  void setPitch(double p) { pitch = p; }
  void setYaw(double w) { yaw = w; }
  void setAirSpeed(double s) { airSpeed = s; }

  //  friend ostream& operator<<(ostream& s, const quadcopter& a);
};
