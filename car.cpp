#pragma once
#include <iostream>
#include "robot.hh"
#include <string>

//Initial idea: since the car will only travel in 2d, at sea level, v will be the velocity of the car,
//0 <= v <= ???. x will be the x axis of the car's location on the world.hh grid. y will be the y axis location
// on the grid. 
//Battery/fuel may be needed? 

car::car (const std::string& name, double x, double y) : name(name), x(x), y(y) {}

void car::carDirection (double x1, double y1)
{
  //double car's direction = sqrt(x1*x1+y1*y1)
}

void car::carSpeed(double v)
{			//the car can stop, v=0, with a maximum speed of ???.
  this->carSpeed = v;
}

std::ostream& operator <<(std::ostream& a, car & xy)
