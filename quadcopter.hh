// Irakli Okruashvili
#pragma once
#include <iostream>
#include <string>

#include "robot.hh"

class quadcopter : public robot {
 public:
  quadcopter(const string& name, double x, double y, double z)
      : name(name), x(x), y(y), z(z) {}
  class quadcopter {
   public:
    quadcopter(const string& name, double x = 0, double y = 0, double z = 0) {}
    void loc_change(double dx, double dy, double dz);
    void setThrottle(double h);
    void setRaw(double r);
    void setPitch(double p);
    void setYaw(double w);
    void setAirSpeed(double s);
    void update(double dt);

    friend ostream& operator<<(ostream& s, const quadcopter& a);
  } private : std::string name;
  double x, y, z;
  double throttle, raw, pitch, yaw, airSpeed;
};
