/*
Author:Wang,YenHsiang
version : 1.0
date : Oct/11
*/
#include "robot.hh"

robot::robot(const vec_3d& pos, double BatteryLife) : location(pos), BatteryLife(BatteryLife) {}
robot::robot(double x, double y, double z, double BatteryLife) : location(x, y, z), BatteryLife(BatteryLife){}

std::ostream& operator<< (std::ostream& a, robot & xyz) {
        a << xyz.location << "batterylife=" << xyz.BatteryLife << endl;
        return a; 
    }
