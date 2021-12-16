<<<<<<< HEAD
=======
#pragma once
>>>>>>> c8763c539bd05d822033960176b1d32ff0116067
/*
    Author : Ming-Hung Yen and Aleksandar Dimoski and Tim Demetriades
*/

#include <vector>
<<<<<<< HEAD

#include "beacon.hh"
#include "vec_3d.hh"

class robot {
 private:
  string name, type;
  vec_3d location;
  vec_3d estLocation;
  double BatteryLife, posVarHoriz, posVarVert, heading, speed, headingVert;
=======
#include "vec_3d.hh" 
#include "beacon.hh"
#include <string>

class robot {
 private:
  string name;              // name of the robot
  vec_3d location;          // the real location of this robot in the simulation
  vec_3d estLocation;       // the estimated location based on navigation, which will have gaussian error
  double BatteryLife;       // current battery life left in the robot
  double posVarHoriz;       // horizontal variance for random error
  double posVarVert;        // vertical variance for random error
  double heading;           // horizontal direction from 0 to 2pi
  double speed;             // speed in forward direction
  double headingVert;       // vertical direction from 0 to 2pi
>>>>>>> c8763c539bd05d822033960176b1d32ff0116067

 public:
    // Constructor
    robot(string name, double x, double y, double z, double posVarHoriz,
            double posVarVert, double heading, double speed, double headingVert,
            double BatteryLife = 100);

    robot(string name, const vec_3d& pos, double posVarHoriz, double posVarVert,
            double heading, double speed, double headingVert, double BatteryLife = 100);

    void move(double time);

<<<<<<< HEAD
  vec_3d getLocation() const { return location; }
  double getBatLife() const { return BatteryLife; }
  string getName() const { return name; }
  string getType() const { return type; }

  friend std::ostream& operator<<(std::ostream& a, robot& xyz);
=======
    vec_3d getEstLocation(vector<beacon> beacons);

    vec_3d getLocation() const { return location; }

    double getBatLife() const { return BatteryLife; }

    string getName() const { return name; }

    friend std::ostream& operator<<(std::ostream& a, robot& xyz);
>>>>>>> c8763c539bd05d822033960176b1d32ff0116067
};
