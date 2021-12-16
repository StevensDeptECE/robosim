#include <iostream>
#include <cmath>
#include "vec_3d.hh"
using namespace std;

// Pavlos Tziranis


  vec_3d::vec_3d(double a = 0, double b = 0, double c = 0) : x(a), y(b), z(c) {}

  ostream& operator<<(ostream& s, const vec_3d& v) {
    return s << "(" << v.x << "," << v.y << "," << v.z << ")";
  }

  vec_3d operator-(vec_3d p, vec_3d k) {
    return vec_3d(p.x - k.x, p.y - k.y, p.z - k.z);
  }
  vec_3d operator+(vec_3d i, vec_3d j) {
    return vec_3d(i.x + j.x, i.y + j.y, i.z + j.z);
  }

  vec_3d vec_3d::operator-() { return vec_3d(-x, -y, -z); }

  double dot(const vec_3d a, const vec_3d b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
  }

  double vec_3d::mag() { return sqrt((x * x) + (y * y) + (z * z)); }
  double vec_3d::magsq() { return (x * x) + (y * y) + (z * z); }
  double vec_3d::dist(const vec_3d b) {
  double a = x - b.x, c = y - b.y, d = z - b.z;
  return sqrt(a * a + c * c + d * d);
  }

  int main() {
    vec_3d v1(1.5, 2.2, -3.1);  // x=1.5 y=2.2 z-3.1
    vec_3d v2(-2.2, 1.2);       // z = 0
    vec_3d v3(5.6);             // y = z = 0
    vec_3d v4;                  // x = y = z = 0

    vec_3d v5 = v1 + v2;
    vec_3d v6 = v1 - v3;
    vec_3d v7 = -v2;         // negation
    double d = dot(v1, v5);  // dot product
    cout << v1 << '\n';
    cout << v2 << '\n';
    cout << v3 << '\n';
    cout << v4 << '\n';
    cout << v5 << '\n';
    cout << v6 << '\n';
    cout << v7 << '\n';

    cout << v1.mag() << '\n';    // magnitude (abs)
    cout << v1.magsq() << '\n';  // magnitude squared  x*x+y*y+z*z
    cout << d << '\n';
    cout << dot(v2,v1) << '\n';
    cout << v7.magsq() << '\n';
    cout << v7.dist(v2) << '\n';
  }
