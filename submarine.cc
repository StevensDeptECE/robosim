//Author: Joseph Villani
#pragma once

#include <iostream>
#incldue <string>
#include "submarine.hh"

submarine::submarine(const std:: string& name, double x,double y, double velX,
			    double velY):name(name),x(x), y(y),velX(velX),velY(velY){  
}

std::ostream& operator <<(std::ostream& s, const submarine b&){
  return s << "Name: " << b.name << '\n';
  return s << "Velocity: (" << b.velX << ", "  << b.velY << ")" << '\n';
  return s << "Location: (" << b.x << ", " << b.y << ")" << '\n';
}

std::istream& operator >>(std::istream& i, submarine b){
  cout << "Enter X Location" << '\n';
  i >> b.x
  cout << "Enter Y Location" << '\n';
  i >> b.y
  cout << "Enter X Velocity" << '\n';
  i >> b.velX
  cout << "Enter Y Velocity" << '\n';
  i >> b.velY
}


