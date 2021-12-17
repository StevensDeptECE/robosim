#include <iostream>
#include "boat.hh"

using namespace std;

/*
Tim Demetriades
12/16/2021
*/

/*
Code from boat.hh header file implemented here.
*/

// Constructor
boat::boat(string name, const vec_3d& pos, double posVarHoriz,
       double posVarVert, double heading, double speed,
       double headingVert, double BatteryLife, double rudderAngle)
        : robot(name, pos, posVarHoriz, posVarVert, heading, speed, headingVert, BatteryLife), rudderAngle(rudderAngle) {}

// Set new rudder angle from 0 to 2pi (radians)
void boat::adjustRudderAngle(double angle) {
    rudderAngle = angle;
}