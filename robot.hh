/*
    Author : Ming-Hung Yen
*/

#include "vec_3d.hh" 
#include "beacon.hh"

extern beacon TestBeacon;

class robot {
private:
    vec_3d location;
    double BatteryLife;
    
public: 
    robot(double x, double y, double z, double BatteryLife) : location(x, y, z), BatteryLife(BatteryLife){}

    vec_3d estlocation = location.dist(TestBeacon);
    
    friend ostream& operator << ( ostream& a, robot & xyz) {
        a << xyz.location << "batterylife=" << xyz.BatteryLife << endl;
        return a; 
    }


};
