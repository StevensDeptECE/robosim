#pragma once
#include <iostream>
#include "robot.hh"

class car : public robot {
private:
    double steering_angle;
    // turn radians
    // positive right
    double r;// turning radius  limit of car turn
    double steering_angle_error;


public:
    // Define Constructor
    car(double const vec_3d& loc, double horizontal_variance, double vertical_variance, double heading, double speed, double BatteryLife, double steering_angle, double r, double steering_angle_error);
    void turn(double turn_val);
    virtual void move(double dt);

};