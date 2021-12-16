#pragma once
#include <cmath>
#include <iostream>
using namespace std;

// Pavlos Tziranis, Anastasios, Aldrin
// colaborators

class vec_3d {
 private:
  double x;
  double y;
  double z;

 public:
  vec_3d(double a, double b, double c);  // constructor for vec

  friend ostream& operator<<(ostream& s, const vec_3d& v);  // prints a vec

  friend vec_3d operator-(vec_3d p,vec_3d k);  // operator - for subtraction between vecs

  friend vec_3d operator+(vec_3d i,vec_3d j);  // operator + for adding two vecs

  vec_3d operator-();  // negation of given vecs

  friend double dot(const vec_3d a, const vec_3d b);  // dot product of two vecs

  double mag();  // magnitude of vector

  double magsq();  // magnitude of a vector squared

  double dist(const vec_3d b);  // magnitude distance from starting position of
                                // const vec_3d b
};
