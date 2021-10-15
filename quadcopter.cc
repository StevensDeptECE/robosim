#include <cmath>
#include "quadcopter.hh"
#include <iostream>

quadcopter::quadcopter(const std::string& name, double x, double y, double z) :
                         name(name), x(x), y(y), z(z), throttle(0), yaw(0), pitch(0), roll(0) { };

void quadcopter::loc_change(double dx, double dy, double dz)
{
    double dxy = sqrt(dx*dx + dy*dy);

    pitch = atan2(dz, dxy);
    yaw   = atan2(dx, dy);
    roll  = atan2(dx, dz);

}

void quadcopter::setThrottle(double h)
{
    h = (h > 0) ? (h == 1) : (h == -1);
    this->throttle = h;
}

void quadcopter::setRaw(double r)
{
    this->row = fmod(r, M_PI);
}

void quadcopter::setPitch(double p)
{
    this->pitch = fmod(p, M_PI);
}


void quadcopter::setYaw(double w)
{
    this->yaw = fmod(w, M_PI);
}

void quadcopter::setAirSpeed(double s)
{
    s = (s < 10) && (s > -10); // wind speed must be lower than 10m/s
    this->airSpeed = s;
}

void quadcopter::update(double dt)
{
    double dz = sin(pitch);
    double dx = dz * tan(roll);
    double dy = dx * tan(yaw);

    x += dx * dt + airSpeed * dt;
    y += dy * dt;
    z += dz * h * dt;
}

std::ostream& operator <<(std::ostream& s, const quadcopter& a)
{
    return (s << "quadcopter: " << a.name << 
              a.x << " " << a.y << " " << a.z << a.throttle 
              <<  a.roll * 180/M_PI << a.yaw * 180/M_PI 
              << a.pitch * 180/M_PI  <<  );
}
