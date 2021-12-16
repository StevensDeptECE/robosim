#include "quadcopter.hh"

#include <string>

#include "vec_3d.hh"

quadcopter::quadcopter(std::string name, double x, double y, double z,
                       double posVarHoriz, double posVarVert, double heading,
                       double speed, double headingVert,
                       double BatteryLife = 100)
    : robot(name, x, y, z, posVarHoriz, posVarVert, heading, speed, headingVert,
            BatteryLife) {}

quadcopter::quadcopter(std::string name, const vec_3d& pos, double posVarHoriz,
                       double posVarVert, double heading, double speed,
                       double headingVert, double BatteryLife = 100)
    : robot(name, pos, posVarHoriz, posVarVert, heading, speed, headingVert,
            BatteryLife) {}

void quadcopter::calculateDir() {
  direction.x = cos(yaw) * cos(pitch);
  direction.y = sin(yaw) * cos(pitch);
  direction.z = sin(pitch);
}

void quadcopter::move(double time) {
  calculateDir();
  double velX = time * direction.x;
  double velY = time * direction.y;
  double velZ = time * direction.z;
  location.x += velX;
  location.y += velY;
  location.z += velZ;
}