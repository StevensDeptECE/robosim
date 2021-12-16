<<<<<<< HEAD
/*
    Author : Ming-Hung Yen and Aleksandar Dimoski
*/
#pragma once

#include <vector>
=======
#include "vec_3d.hh" 
#include "beacon.hh"
#include <string>
>>>>>>> 9c4d3d17b51fc6259b44aca1bd30c8ce871f29f0

#include "beacon.hh"
#include "vec_3d.hh"

class robot {
<<<<<<< HEAD
 private:
  string name;
  vec_3d location;
  vec_3d estLocation;
  double BatteryLife, posVarHoriz, posVarVert, heading, speed, headingVert;

 public:
  robot(string name, double x, double y, double z, double posVarHoriz,
        double posVarVert, double heading, double speed, double headingVert,
        double BatteryLife);

  robot(string name, const vec_3d& pos, double posVarHoriz, double posVarVert,
        double heading, double speed, double headingVert, double BatteryLife);

  void move(double time);
  vec_3d getEstLocation(vector<beacon> beacons);

  vec_3d getLocation() const { return location; }
  double getBatLife() const { return BatteryLife; }
  string getName() const { return name; }

  friend std::ostream& operator<<(std::ostream& a, robot& xyz);
=======
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
>>>>>>> 9c4d3d17b51fc6259b44aca1bd30c8ce871f29f0
};
