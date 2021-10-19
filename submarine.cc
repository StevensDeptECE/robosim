//Author: Joseph Villani
#pragma once

#include <iostream>
#incldue <string>
#include "submarine.hh"

submarine::submarine(const std:: string& name,vec_3d pos,vec_3d vel,uint16_t max_speed,
		     int32_t max_depth, bool beached, int32_t rudder_ang, int32_t prop_spd,
		     int32_t plane_ang):name(name)),pos(pos),vel(vel),max_speed(max_speed),
					max_depth(max_depth),beached(beached),rudder_ang(rudder_ang),
				        prop_spd(prop_spd),plane_ang(plane_ang){}

std::ostream& operator <<(std::ostream& s, const submarine b&){
  return s << "Name: " << b.name << '\n';
  return s << "Velocity: (" << b.vel << '\n';
  return s << "Location: (" << b.pos << '\n';
}

std::istream& operator >>(std::istream& i, submarine b){

}

void setRudder(){//Change X/Y Direction
}
void setProp(){ //Change X/Y Velocity
}
void setPlane(){ //Move in Z
}
void move(){//Combination
}
