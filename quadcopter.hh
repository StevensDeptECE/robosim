//Irakli Okruashvili
#pragma once
#include <iostream>
#include <string>
#include "vec_3d.hh"
#include "robot.hh"

// Collaborators: Pavlos Tziranis, Aldrin Padua, Anastasios Zochios

class quadcopter : public robot {
<<<<<<< HEAD
    public:
        quadcopter(double x, double y, double z, double hvar, double vvar, double hdg, double speed, double battlife);

        void loc_change(double dx, double dy, double dz);

        void setThrottle(double h);

        void setRaw(double r);

        void setPitch(double p);

        void setYaw(double w);

        void setAirSpeed(double s);
        
        void update(double dt);

        friend ostream& operator <<(ostream& s, const quadcopter& a);

    private:
        double throttle;
        double raw;
        double pitch;
        double yaw; 
        double airSpeed;
=======
private:
  string name;
  vec_3d location;
  double x, y, z;
  double throttle, raw, pitch, yaw, airSpeed;

public:
  quadcopter(const string& name="", const vec_3d& pos=vec_3d(0,0,0)) : name(name), location(pos) {}
  quadcopter(const string& name="", double x = 0, double y = 0, double z = 0) : name(name), location(vec_3d(x, y, z)) {}
  void tick();
  void loc_change(double dx, double dy, double dz);
  void setThrottle(double h);
  void setRaw(double r);
  void setPitch(double p);
  void setYaw(double w);
  void setAirSpeed(double s);
  void update(double dt);

  friend ostream& operator <<(ostream& s, const quadcopter& a);
>>>>>>> c8763c539bd05d822033960176b1d32ff0116067
};
