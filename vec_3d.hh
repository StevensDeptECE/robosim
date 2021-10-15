
#pragma once
#include <iostream>
#include <cmath>

using namespace std;


// create constructor to create the vec_3d objects
class vec_3d{

    public:
        double x;
        double y;
        double z;

        vec_3d(double p_x, double p_y, double p_z){
            x = p_x;
            y = p_y;
            z = p_z;
        }
        vec_3d(double p_x, double p_y) {
            x = p_x;
            y = p_y;
            z = 0;
        }

        vec_3d(double p_x){
            x = p_x;
            y = 0;
            z = 0;
        }
        vec_3d(){
            x = 0;
            y = 0;
            z = 0;
        }

    // overload operators for vector math

    vec_3d operator+ (vec_3d add_num){
            vec_3d result;
            result.x = x + add_num.x;
            result.y = y + add_num.y;
            result.z = z + add_num.z;

            return result;
        }

    vec_3d operator- (vec_3d minus_num){
        vec_3d result;
        result.x = x - minus_num.x;
        result.y = y - minus_num.y;
        result.z = z - minus_num.z;

        return result;
    }

//    vec_3d operator- (){
//        vec_3d negation_result(-x, -y, -z);
//        return negation_result;
//        }

    vec_3d operator- (){
        vec_3d result;
        result.x = -x;
        result.y = -y;
        result.z = -z;
        return result;
        }


    // create three methods to compute various vector properties

    double mag(){
            double mag_result;
            double a = abs(x);
            double b = abs(y);
            double c = abs(z);
            mag_result = a+b+c;

            return mag_result;
        }


    double magsq(){
            double magsq_result;
            double a = x;
            double b = y;
            double c = z;
            magsq_result = a*a+b*b+c*c;

            return magsq_result;
        }

    double dot(vec_3d num){
            double dot_result;
            dot_result = x*num.x + y*num.y + z*num.z;

            return dot_result;
        }

    double manhattan_distance(vec_3d num){
            double md_result;
            double a = abs(x - num.x);
            double b = abs(y - num.y);
            double c = abs(z - num.z);

            md_result = a + b + c;
            return md_result;
        }





};


// compute the dot product as a function
double dot(vec_3d num_1, vec_3d num_2){
    double result;
    result = num_1.x*num_2.x + num_1.y*num_2.y + num_1.z * num_2.z;
    return result;
}


// Overload the << operator
ostream& operator<< (ostream& p_cout, vec_3d& num){
    p_cout << "(" << num.x <<"," << num.y << "," << num.z <<")" ;
    return p_cout;
}


// Overload the >> operator
istream& operator>> (istream& p_cin, vec_3d& num){

    p_cin >> num.x >> num.y >> num.z;
    return p_cin;
}




int main() {
  //
}

