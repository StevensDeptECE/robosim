#include "airplane.hh"

airplane::airplane(std::string name, int x, int y, int z) : name(name), x(x), y(y), z(z) { }

std::ostream& operator <<(std::ostream& s, const airplane& a)
{
  return s << "airplane: " << a.name << " (" << a.x << ", " << a.y << ", " << a.z << ")\n"; 
}