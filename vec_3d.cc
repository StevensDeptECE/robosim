#include <iostream>
#include <cmath>
#include "vec_3d.hh"
using namespace std;

// Pavlos Tziranis, Anastasios, Aldrin
// colaborators
// View "vec_3d.hh" for constructor comments/clarifications

vec_3d::vec_3d(double a = 0, double b = 0, double c = 0) : x(a), y(b), z(c) {} // initialize a vec_3d at the origin (0,0,0)

ostream& operator<<(ostream& s, const vec_3d& v) {
  return s << "(" << v.x << "," << v.y << "," << v.z << ")"; // cout individual values (xyz) of a vec_3d with commas and parentheses
  }

  vec_3d operator-(vec_3d p, vec_3d k) {
    return vec_3d(p.x - k.x, p.y - k.y, p.z - k.z); // computes the difference between the respective values in two vectors returning a vector with solutions
  }
  vec_3d operator+(vec_3d i, vec_3d j) {
    return vec_3d(i.x + j.x, i.y + j.y, i.z + j.z); // computes the  summation of the respective values in two vectors returning a vector with solutions
  }

  vec_3d vec_3d::operator-() { return vec_3d(-x, -y, -z); } // negates the x y and z components of a vector

  double dot(const vec_3d a, const vec_3d b) {
    return a.x * b.x + a.y * b.y + a.z * b.z; // computes dot product of two vectors returning a value
  }

  double vec_3d::mag() { return sqrt((x * x) + (y * y) + (z * z)); } // magnitude of the vector using summation of components squared inside sqrt() from library cmath 

  double vec_3d::magsq() { return (x * x) + (y * y) + (z * z); }// magnitude of the vector squared to cancel sqrt() from library cmath 

  double vec_3d::dist(const vec_3d b) { // computes a traveled distance using the magnitude of the difference between two vectors 
  double a = x - b.x, c = y - b.y, d = z - b.z;
  return sqrt(a * a + c * c + d * d);
  }
