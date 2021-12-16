#pragma once


#include <cmath>
#include <iostream>
using namespace std;

class world {
 private:
  int sea_lvl = 0, size;
  double X_elevation,Y_elevation,Z_elevation;
  double Coordinates[][3];

 public:

   world(double x = 0, double y = 0, double z = 0) : X_elevation(x), Y_elevation(y),Z_elevation(sea_lvl - z) {

  }
  friend world draw_world(world a){
      return 0;
  }
  
    friend world Coordinates_Matrix(world a) {
    for (int loop_1=0; loop_1<a.size; loop_1++){
        for (int loop_2=0; loop_2<3; loop_2++)
        {
            if (loop_2 = 1){
                a.Coordinates[loop_1][loop_2]={a.X_elevation};
            }
            if (loop_2 = 2){
                a.Coordinates[loop_1][loop_2]={a.Y_elevation};
            }
            if (loop_2 = 3){
                a.Coordinates[loop_1][loop_2]={a.Z_elevation};
            }
        }
        
    }
    return 0;
  }
  
  
 


  /* 
  make a class of unit of land (square) variables of elevation of land, water, air, etc.
  then make a mtrix of the squares within the world class
  include the draw function: 
  array of robots & beacons
  */
};


int main() {
 cout<<"hi"<<endl;
}