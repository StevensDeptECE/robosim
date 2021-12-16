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
- heading = horizontal direction of the robot
- speed = speed in the forward direction
- batteryLife = current battery life of the robot
For the estimated location, it is calculated by taking the real location and adding some Gaussian error,
which is a vector 3D consisting where each x, y, and z component is Gaussian with a mean of 0 and variance 
that is passed to the object (horizontal variance and vertical variance).
*/

<<<<<<< HEAD
robot::robot(double x, double y, double z, double BatteryLife=0) : location(x, y, z), BatteryLife(BatteryLife){}
=======
robot::robot(const string& name, const vec_3d& loc, double horizontal_variance, double vertical_variance, double heading, double speed, double batteryLife)
    : name(name), location(loc), heading(heading), speed(speed) {
        est_loc = location + vec_3d(N(0, horizontal_variance), N(0, horizontal_variance), N(0, vertical_variance));
    }
>>>>>>> 9c4d3d17b51fc6259b44aca1bd30c8ce871f29f0

ostream& operator<< (std::ostream& a, robot & xyz) {
        a << xyz.location << "batterylife=" << xyz.batteryLife << endl;
        return a; 
    }
