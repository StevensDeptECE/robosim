/*
Author:Wang,YenHsiang
version : 1.0
date : Oct/11
*/
#include "robot.hh"
#include "random.hh"

/*

*/

robot::robot(const vec_3d& loc, double horizontal_variance, double vertical_variance, double heading, double speed, double BatteryLife)
    : location(loc), heading(heading), speed(speed) {
        est_loc = location + vec_3d(N(0, horizontal_variance), N(0, horizontal_variance), N(0, vertical_variance));
    }

std::ostream& operator<< (std::ostream& a, robot & xyz) {
        a << xyz.location << "batterylife=" << xyz.BatteryLife << endl;
        return a; 
    }
