
#pragma once
#include <iostream>
#include <cmath>

using namespace std;


// create constructor to create the vec_3d objects

class vec_3d {
 private:
  double x;
  double y;
  double z; 

 public:
  vec_3d(double a, double b, double c );

  friend ostream& operator<<(ostream& s, const vec_3d& v);

  friend vec_3d operator-(vec_3d p, vec_3d k);

  friend vec_3d operator+(vec_3d i, vec_3d j);

  vec_3d operator-(); 

  friend double dot(const vec_3d a, const vec_3d b);

  double mag();

  double magsq();

  double dist(const vec_3d b);
};

