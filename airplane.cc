#include "airplane.hh"

airplane::airplane(const std::string& name, double x = 0, double y = 0, double z = 0) : name(name), x(x), y(y), z(z) { }

std::ostream& operator <<(std::ostream& s, const airplane& a)
{
  return s << "airplane: " << a.name << " (" << a.x << ", " << a.y << ", " << a.z << ")\n"; 
}