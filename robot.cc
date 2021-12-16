#include "robot.hh"
#include "random.hh"

using namespace std;

/*
Robot is the base class all of the vehicles will inherit from.
It takes the following:
- name = The name of the robot to tell the different robots apart
- loc = The real location as vector 3D object constisting of the x, y, and z positions
- horizontal_variance = Needed to determine error in estimated location
- vertical_variance = Needed to determine error in estimated location
- heading = horizontal direction from 0 to 2pi (in radians) of the robot
- speed = speed in the forward direction
- batteryLife = current battery life of the robot
For the estimated location, it is calculated by taking the real location and adding some Gaussian error,
which is a vector 3D consisting where each x, y, and z component is Gaussian with a mean of 0 and variance 
that is passed to the object (horizontal variance and vertical variance).
*/

// Constructor
robot::robot(const string& name, const vec_3d& loc, double horizontal_variance, double vertical_variance, double heading, double speed, double batteryLife)
    : name(name), location(loc), heading(heading), speed(speed), est_loc(location + vec_3d(N(0, horizontal_variance), N(0, horizontal_variance), N(0, vertical_variance))) {}

// Displaying battery life
ostream& operator<< (std::ostream& a, robot & xyz) {
        a << xyz.location << "batterylife=" << xyz.batteryLife << endl;
        return a; 
    }
