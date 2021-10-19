#pragma once
#include <iostream>

#include <iostream>
#include <iomanip>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>

using namespace std;

class vec_3d {
private: 
	double v1,v2,v3;

public:
	vec_3d(double vec1 = 0, double vec2 = 0, double vec3 = 0): v1(vec1), v2(vec2), v3(vec3) {
		// cout<<"In the constructor: "<<v1 <<"  "<<v2<< "  "<<v3<<endl;
	}

	friend vec_3d operator +(const vec_3d& a,const vec_3d& b) {
		return vec_3d((a.v1 + b.v1),(a.v2 + b.v2),(a.v3 + b.v3));
	}

	friend vec_3d operator -(const vec_3d& c) {
		return vec_3d(-c.v1,-c.v2,-c.v3);
	}

	friend vec_3d operator -(const vec_3d& d, const vec_3d& e){
		return vec_3d((d.v1 - e.v1), (d.v2 - e.v2), (d.v3 - e.v3));
	}

	friend double dot(const vec_3d& i, const vec_3d& j){
		return ((i.v1 * j.v1) + (i.v2 * j.v2) + (i.v3 * j.v3));
	}

	double dot(const vec_3d& f) {
		return ((v1 * f.v1) + (v2 * f.v2) + (v3 * f.v3));
	}	

	static double dot(const vec_3d& a, const vec_3d& b){ 
		return ((a.v1 * b.v1)+(a.v2 * b.v2)+(a.v3 * b.v3));
	}

	double mag() {
		return sqrt((pow(v1,2))+(pow(v2,2))+(pow(v3,2)));
	}	

	friend ostream& operator <<(ostream& s, vec_3d& vec){
		cout<< fixed << setprecision(2);
		return s << "("<<vec.v1<<", "<<vec.v2<<", "<<vec.v3<<")";
	}
	friend istream& operator >>(istream& s, vec_3d& vec){
		cin>> fixed >> setprecision(2);
		return s >>vec.v1>>vec.v2>>vec.v3;
	}
};