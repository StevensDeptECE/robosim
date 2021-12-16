#include "quadcopter.hh"

// Collaborators: Pavlos Tziranis, Aldrin Padua, Anastasios Zochios


quadcopter::quadcopter(std::string name, double x, 
            double y, double z, double hvar, double vvar, double hdg, double speed, double battlife) 
            : robot(name, x, y, z, hvar, vvar, hdg, speed, battlife) {};


ostream& operator <<(ostream& s, const quadcopter& a) {
    return s << a.getName() << a.getLocation();
}
//TODO
void loc_change(double dx, double dy, double dz) {}

void setThrottle(double h) {}

void setRaw(double r) {}

void setPitch(double p) {}

void setYaw(double w) {}

void setAirSpeed(double s) {}
        
void update(double dt){}
//


