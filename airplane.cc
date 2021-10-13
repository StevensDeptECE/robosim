#include "airplane.hh"

airplane::airplane(const std::string& name, double x, double y, double z) : name(name), x(x), y(y), z(z), pitch(0), yaw(0) { }

void airplane::lookAt(double dx, double dy, double dz)
{
  double dxy = sqrt(dx*dx + dy*dy); // magnitude of just the x and y components 

  yaw = atan2(dx, dy);
  pitch = atan2(dz, dxy);
}

void airplane::setYaw(double y)
{
  this->yaw = fmod(y, M_PI);
}

void airplane::setPitch(double p)
{
  this->pitch = fmod(p, M_PI);
}

void airplane::setAirSpeed(double s)
{
  s = (s > 0) ? s : 0; // ensure speed >= 0
  this->airSpeed = s;
}

void airplane::update(double dt)
{
  double dz = sin(pitch); 
  double dxy = dz / tan(pitch); 
  double dx = dxy * sin(yaw);
  double dy = dxy * cos(yaw); 

  x += dx * dt * airSpeed;
  y += dy * dt * airSpeed;
  z += dz * dt * airSpeed;
}

std::ostream& operator <<(std::ostream& s, const airplane& a)
{
  return (s << "airplane: " << a.name << "\n   pos:\t(" << a.x << ", " << a.y << ", " << a.z << 
    ")\n   yaw (+y rel):\t" << a.yaw * 180/M_PI << "°\n   pitch (x,y rel):\t" << a.pitch * 180/M_PI  << "°\n"); 
}