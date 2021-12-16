#include "airplane.hh"

using namespace std;

ostream& operator<<(ostream& s, const airplane& a) {
  return s << "airplane: " << a.name << " " << a.location;
}