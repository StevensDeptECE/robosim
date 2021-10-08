#pragma once

#include <iostream>
#include "robot.hh"

class car : public robot {
private:
    double x, y;
    double vel_x, vel_y, max_speed;
public:
    car(double x = 0, double y = 0, double vel_x= 0, double vel_y = 0, double max_speed)


};