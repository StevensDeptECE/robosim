/*
 Gautham Prem Krishnan
*/

#pragma once
#include <iostream>
#include "robot.hh";
#include "beacon";
using namespace std;

 class vec_3d{
  private:
   double x1,y1,x2,y2;

  public:
   vec_3d() : x1(0), y1(0),x2(0),y2(0){}
   vec_3d(double x_input, double y_input, double z_input):x1(x_input),y1(y_input),z1(z_input){}
   vec_3d(double x_input, double y_input) :x1(x_input),y1(y_input),z1(0){}
   vec_3d(double x_input) : x1(x_input), y1(0), z1(0){
   }


   double batterylife() const{
     cout<<"Battery Life";
   }

   double location(const vec_3d& a,const vec_3d& b){
   double ans = (a.x1 - a.x1, b.y1-b.y2);
   return ans;
 }
 };

