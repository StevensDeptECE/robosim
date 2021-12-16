//Irakli Okruashvili
#pragma once
#include <iostream>
#include <string>
#include "vec_3d.hh"
#include "robot.hh"

// Collaborators: Pavlos Tziranis, Aldrin Padua, Anastasios Zochios

class quadcopter : public robot {

    public:
        quadcopter(std::string name, double x, double y, double z, double hvar, double vvar, double hdg, double speed, double battlife);

        void tick();

        void loc_change(double dx, double dy, double dz);

        void setThrottle(double h);

        void setRaw(double r);

        void setPitch(double p);

        void setYaw(double w);

        void setAirSpeed(double s);
        
        void update(double dt);

        friend ostream& operator <<(ostream& s, const quadcopter& a);

    private:
        std::string name;
        double throttle;
        double raw;
        double pitch;
        double yaw; 
        double airSpeed;
};
