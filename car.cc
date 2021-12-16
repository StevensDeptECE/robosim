#include <iostream>
#include <cmath>
#include "car.hh"
#include "random.hh"


using namespace std;


// Define Car Constructor
car:: car(double const vec_3d& loc, double horizontal_variance, double vertical_variance, double heading, double speed, double BatteryLife, double steering_angle, double r, double steering_angle_error)
        : robot(loc, horizontal_variance, vertical_variance, heading, speed,  BatteryLife),
          steering_angle(steering_angle),
          r(r),
          steering_angle_error(steering_angle_error)
          {

}


// Define Method To Turn Radians
// streeing angle = turn val + error
void car:: turn(double turn_val){
    steering_angle = turn_val + N(0, steering_angle_error);
}


// how the car actually move
void car:: move (double dt){
    // calculate the turning angle
    heading += steering_angle;

    // calculate the radius with consideration of speed
    r = r + speed*dt;


    location = location + heading + ;

}
// how fast the heading turn






