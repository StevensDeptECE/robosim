#pragma once

#include "vec_3d.hh" 
#include "beacon.hh"
#include <string>

extern beacon TestBeacon;

class robot {
private:
    const string name;   // name of the robot
    vec_3d location;     // the real location of this robot in the simulation
    vec_3d est_loc;      // the estimated location based on navigation, which will have gaussian error
    double heading;      // horizontal direction from 0 to 2pi (in radians)
    double speed;        // speed in the forward direction
    double batteryLife;  // current battery life left in the robot
    
public: 
    // Constructor
    robot(const string& name,               // name of robot
          const vec_3d& loc,                //location as a vector (x, y, z)
          double horizontal_variance,       // for random error
          double vertical_variance,         // for random error
          double heading, 
          double speed, 
          double batteryLife = 0);

    //vec_3d estlocation = location.dist(TestBeacon);
    
    // Displaying battery life
    friend ostream& operator << ( ostream& a, robot & xyz) {
        a << xyz.location << "batterylife=" << xyz.batteryLife << endl;
        return a; 
    }
};
