#include "world.hh"

using namespace std;

int main() {
//	world sim;
	car c(vec_3d(10,0,0), 0);
	c.speed(3);
    c.turn(5); // turn by 5 degrees + steering error
	c.speed(2.5);

	//sim.advance(0.1); // advance by 0.1 seconds, all robots move
	
	cout << "test robot" << endl
}
