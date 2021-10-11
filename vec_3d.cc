#include <cmath>
#include <iostream>
using namespace std;

class vec_3d {
 private:
  double vec1, vec2, vec3;

 public:
  vec_3d(double x = 0.0, double y = 0.0, double z = 0.0)
      : vec1(x), vec2(y), vec3(z) {}
  friend vec_3d operator+(vec_3d a, vec_3d b) {
    return vec_3d(a.vec1 + b.vec1, a.vec2 + b.vec2, a.vec3 + b.vec3);
  }
  friend vec_3d operator-(vec_3d a, vec_3d b) {
    return vec_3d(a.vec1 - b.vec1, a.vec2 - b.vec2, a.vec3 - b.vec3);
  }
  friend vec_3d operator-(vec_3d a) {
    return vec_3d(-a.vec1, -a.vec2, -a.vec3);
  }
  friend ostream& operator<<(ostream& s, vec_3d c) {
    return s << "(" << c.vec1 << ',' << c.vec2 << ',' << c.vec3 << ")";
  }
  friend vec_3d dot(vec_3d a, vec_3d b) {
    return d = (a.vec1 * b.vec1) + (a.vec2 * b.vec2) + (a.vec3 * b.vec3);
  }
  friend istream& operator>>(istream& s, vec_3d c) {
    return s >> c.vec1 >> c.vec2 >> c.vec3;
  }
  friend vec_3d mag(vec_3d a) {
    double ans = (a.vec1 * a.vec1) + (a.vec2 * a.vec2) + (a.vec3 * a.vec3);
    return sqrt(ans);
  }
  friend vec_3d magsq(vec_3d a) {
    return (a.vec1 * a.vec1) + (a.vec2 * a.vec2) + (a.vec3 * a.vec3);
  }
};
