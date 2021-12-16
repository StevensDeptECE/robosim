#include "world.hh"

    world::world(double size_x=1000, double size_y=1000) : size_x(size_x), size_y(size_y) {
        world_map = new Square*[size_x];
        for (int i = 0; i < size_x; i++) {
            world_map[i] = new Square[size_y];
        }
    }
    void world::configBots() {
        ifstream f("data/sim1.conf");
        //ifstream f("data/robotdata.dat");
        char buffer[4096];
        char name[20];
        string type;
        double x;
        double y;
        double z;
        double positionVarianceHorizontal;
        double positionVarianceVertical;
        double heading;
        double speed;
        double headingVertical;
        robot temp;
        while (f.getline(buffer, sizeof(buffer))) {
            istringstream line(buffer);
            if(!(line >> type)){
                break;
            }
            line >> name >> x >> y >> z >> positionVarianceHorizontal >> positionVarianceVertical >> heading >> speed >> headingVertical;
            heading -= 90;
            heading *= 180.0 / 3.14159265358;
            if (type == "beacon") {
                // for beacons, the position variances are actually 
                beacons.push_back(beacon(name, x, y, z, positionVarianceHorizontal, positionVarianceVertical));
            } else {
                //#type   name    x     y    z     positionVarianceHorizontal  positionVarianceVertical    heading speed   headingVertical
                if (type == "robot") {
                    temp = robot(name, x, y, z, positionVarianceHorizontal, positionVarianceVertical, heading, speed, headingVertical);
                } else if (type == "car") {
                    temp = car(name, x, y, z, positionVarianceHorizontal, positionVarianceVertical, heading, speed, headingVertical);
                } else if (type == "submarine") {
                    temp = submarine(name, x, y, z, positionVarianceHorizontal, positionVarianceVertical, heading, speed, headingVertical);
                } else if (type == "airplane") {
                    temp = airplane(name, x, y, z, positionVarianceHorizontal, positionVarianceVertical, heading, speed, headingVertical);
                } else if (type == "boat") {
                    temp = boat(name, x, y, z, positionVarianceHorizontal, positionVarianceVertical, heading, speed, headingVertical);
                } else if (type == "quadcopter") {
                    temp = quadcopter(name, x, y, z, positionVarianceHorizontal, positionVarianceVertical, heading, speed, headingVertical);
                } else if (type == "tank") {
                    temp = tank(name, x, y, z, positionVarianceHorizontal, positionVarianceVertical, heading, speed, headingVertical);
                }
                robots.push_back(temp);
            }
        }
        // cout << "Robots: " << endl;
        // for (int i = 0; i < robots.capacity(); i++) {
        //     robots[i].print();
        // }
        // cout << "Beacons: " << endl;
        // for (int i = 0; i < beacons.capacity(); i++) {
        //     beacons[i].print();
        // }
    }
    void world::draw_world(world a) {}
    void world::tick() {
        for (int i = 0; i < this->robots.size(); i++) {
            robots[i].move(this->timestep);
        }
    }