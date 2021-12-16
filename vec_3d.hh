#pragma once
#include <cmath>
<<<<<<< HEAD

=======
#include <iostream>
using namespace std;
>>>>>>> 9c4d3d17b51fc6259b44aca1bd30c8ce871f29f0

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

<<<<<<< HEAD
    friend double dot(const vec_3d& num_1, const vec_3d& num_2);
    friend std::ostream& operator<<(std::ostream& p_cout, const vec_3d& num);
    friend std::istream& operator>>(std::istream& p_cin, const vec_3d& num);
=======
  vec_3d operator-();  // negation of given vecs

  friend double dot(const vec_3d a, const vec_3d b);  // dot product of two vecs
>>>>>>> 9c4d3d17b51fc6259b44aca1bd30c8ce871f29f0

  double mag();  // magnitude of vector

  double magsq();  // magnitude of a vector squared

  double dist(const vec_3d b);  // magnitude distance from starting position of
                                // const vec_3d b
};
<<<<<<< HEAD


// compute the dot product as a function
double dot(vec_3d num_1, vec_3d num_2){
    double result;
    result = num_1.x*num_2.x + num_1.y*num_2.y + num_1.z * num_2.z;
    return result;
}


// Overload the << operator
std::ostream& operator<< (std::ostream& p_cout, vec_3d& num){
    p_cout << "(" << num.x <<"," << num.y << "," << num.z <<")" ;
    return p_cout;
}


// Overload the >> operator
std::istream& operator>> (std::istream& p_cin, vec_3d& num){

    p_cin >> num.x >> num.y >> num.z;
    return p_cin;
}
=======
>>>>>>> 9c4d3d17b51fc6259b44aca1bd30c8ce871f29f0
