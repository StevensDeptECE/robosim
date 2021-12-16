//Irakli Okruashvili
#pragma once
#include <iostream>
#include <string>
#include "vec_3d.hh"
#include "robot.hh"

using namespace std;

class quadcopter : public robot {
private:
  string name;
  vec_3d location;
  double x, y, z;
  double throttle, raw, pitch, yaw, airSpeed;

public:
  quadcopter(const string& name="", const vec_3d& pos=vec_3d(0,0,0)) : name(name), location(pos) {}
  quadcopter(const string& name="", double x = 0, double y = 0, double z = 0) : name(name), location(vec_3d(x, y, z)) {}
  void tick();
  void loc_change(double dx, double dy, double dz);
  void setThrottle(double h);
  void setRaw(double r);
  void setPitch(double p);
  void setYaw(double w);
  void setAirSpeed(double s);
  void update(double dt);

  friend ostream& operator <<(ostream& s, const quadcopter& a);
};
