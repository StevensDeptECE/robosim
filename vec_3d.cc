#include <cmath>
#include <iostream>
using namespace std;
#include "vec_3d.hh"

vec_3d::vec_3d(int x, int y, int z) : x(p_x), y(p_y), z(p_z) {}

friend vec_3d operator+(vec_3d add_num) {
  vec_3d result;
  result.x = x + add_num.x;
  result.y = y + add_num.y;
  result.z = z + add_num.z;
  return result;
}
friend vec_3d operator-(vec_3d minus_num) {
  vec_3d result;
  result.x = x - minus_num.x;
  result.y = y - minus_num.y;
  result.z = z - minus_num.z;

  return result;
}
friend vec_3d operator-() {
  vec_3d result;
  result.x = -x;
  result.y = -y;
  result.z = -z;
  return result;
}
friend double mag() {
  double mag_result;
  double a = abs(x);
  double b = abs(y);
  double c = abs(z);
  mag_result = a + b + c;

  return mag_result;
}
friend double magsq() {
  double magsq_result;
  double a = x;
  double b = y;
  double c = z;
  magsq_result = a * a + b * b + c * c;

  return magsq_result;
}
friend double dot(vec_3d num) {
  double dot_result;
  dot_result = x * num.x + y * num.y + z * num.z;

  return dot_result;
}

friend double manhattan_distance(vec_3d num) {
  double md_result;
  double a = abs(x - num.x);
  double b = abs(y - num.y);
  double c = abs(z - num.z);

  md_result = a + b + c;
  return md_result;
}
friend double dot(vec_3d num_1, vec_3d num_2) {
  double result;
  result = num_1.x * num_2.x + num_1.y * num_2.y + num_1.z * num_2.z;
  return result;
}

// Overload the << operator
friend ostream& operator<<(ostream& p_cout, vec_3d& num) {
  p_cout << "(" << num.x << "," << num.y << "," << num.z << ")";
  return p_cout;
}

// Overload the >> operator
friend istream& operator>>(istream& p_cin, vec_3d& num) {
  p_cin >> num.x >> num.y >> num.z;
  return p_cin;
}
}
;
