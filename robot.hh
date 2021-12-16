/*
    Author : Ming-Hung Yen
*/

#include "vec_3d.hh" 
#include "beacon.hh"

extern beacon TestBeacon;

class robot {
private:
    vec_3d location;     // the real location of this robot in the simulation
    vec_3d est_loc;      // the estimated location based on navigation, which will have error
    double heading;      // horizontal direction from 0 to 2pi
    double speed;        // speed in the forward direction
    double BatteryLife;
    
public: 
    robot(const vec_3d& loc, double horizontal_variance, double vertical_variance, double heading, double speed, double BatteryLife = 0);

    vec_3d estlocation = location.dist(TestBeacon);
    
    friend ostream& operator << ( ostream& a, robot & xyz) {
        a << xyz.location << "batterylife=" << xyz.BatteryLife << endl;
        return a; 
    }


};
