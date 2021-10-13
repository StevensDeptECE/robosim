#pragma once
#define _USE_MATH_DEFINES
#include <iostream>
#include <string>
#include <cmath>
//#include "robot.hh"

//should eventually inherit from robot
class airplane{// : public robot {
public:
  airplane(const std::string& name, double x = 0, double y = 0, double z = 0);
  void lookAt(double dx, double dy, double dz);
  void setYaw(double y);
  void setPitch(double p);
  void setAirSpeed(double s);
  void update(double dt);

  friend std::ostream& operator <<(std::ostream& s, const airplane& a);

private:
  std::string name; 
  double x, y, z;

  double airSpeed; // [0, inf]
  double yaw;   // [-Pi, Pi] relative to +y axis on the x,y plane
  double pitch; // [-Pi, Pi] horizon relative. in other words, pitch along z relative to x,y plane
};

