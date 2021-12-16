/*
    Author : Ming-Hung Yen and Aleksandar Dimoski
*/

#include "beacon.hh"
#include "vec_3d.hh"

extern beacon TestBeacon;

class robot {
<<<<<<< HEAD
 private:
  string name;
  vec_3d location;
  double BatteryLife, posVarHoriz, posVarVert, heading, speed, headingVert;
=======
private:
    vec_3d location;     // the real location of this robot in the simulation
    vec_3d est_loc;      // the estimated location based on navigation, which will have error
    double BatteryLife;
    
public:
 robot(const vec_3d& location, double BatteryLife);
 robot(double x, double y, double z, double BatteryLife);
>>>>>>> 959a9741665b2566e336f253c360584b94af250e

 public:
  //  robot(const vec_3d& location, double BatteryLife);
  //  robot(double x, double y, double z, double BatteryLife);
  robot(string name, double x, double y, double z, double posVarHoriz,
        double posVarVert, double heading, double speed, double headingVert);
  robot(string name, const vec_3d& pos, double posVarHoriz, double posVarVert,
        double heading, double speed, double headingVert);

  // void tick();
  vec_3d estlocation = location.dist(TestBeacon);

  friend ostream& operator<<(ostream& a, robot& xyz) {
    a << xyz.location << "batterylife=" << xyz.BatteryLife << endl;
    return a;
  }
};
