/*

        Author:Zhengguang Wang

        cite:
        1) W3schools
        (https://www.w3schools.com/cpp/default.asp)
        2)overloading not working
        http://www.cplusplus.com/forum/beginner/158262/
        3)error: cannot convert 'double' to 'double*'
        http://www.cplusplus.com/forum/beginner/13832/
        4)Vectors in a Plane and Space
        http://www.nabla.hr/PC-VectCoordSyst5.htm

*/
#pragma once


#include <cmath>
#include <iostream>
using namespace std;

class world {
 private:
  int sea_lvl = 0;
  double X, Y, Elevation;


 public:
    world(double x, double y, double z);

 public:
 
  World(double x = 0, double y = 0, double z = 0) : X(x), Y(y), Z(z) {
      z = sea_lvl - z;
  }
  
  
  /*
  friend vec_3d operator+(vec_3d a, vec_3d b) {
    return vec_3d(a.X + b.X, a.Y + b.Y, a.Z + b.Z);
  }

  friend vec_3d operator-(vec_3d a, vec_3d b) {
    return vec_3d(a.X - b.X, a.Y - b.Y, a.Z - b.Z);
  }

  friend vec_3d operator-(vec_3d a) { return vec_3d(-a.X, -a.Y, -a.Z); }

  friend ostream& operator<<(ostream& s, vec_3d a) {
    return s << "(" << a.X << "," << a.Y << "," << a.Z << ")";
  }

  friend istream& operator>>(istream& s, vec_3d& a) {
    cout << "input a value for x,y,z & press enter after each input" << endl;
    return s >> a.X >> a.Y >> a.Z;
  }

  friend double dot(vec_3d& a, vec_3d& b) {
    double output = a.X * b.X + a.Y * b.Y + a.Z * b.Z;
    return output;
  }

  double mag() {
    cout << endl << "magnitude of v1 is" << endl;
    return (abs(sqrt(X * X + Y * Y + Z * Z)));
  }
  double magsq() {
    cout << endl << "magnitude square of v1 is" << endl;
    return (abs(X * X + Y * Y + Z * Z));
  }
  */
};
