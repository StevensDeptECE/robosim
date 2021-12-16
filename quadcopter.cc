#include "quadcopter.hh"



class quadcopter : public robot {
    public:
        quadcopter(double x, 
            double y, double z, double hvar, double vvar, double hdg, double speed, double battlife) 
            : robot(vec_3d(x, y, z), hvar, vvar, hdg, speed, battlife) {};

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
};
