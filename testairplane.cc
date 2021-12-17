#include "airplane.hh"
#include <iostream>

using namespace std;

int main()
{
  airplane a("plane", 0, 0, 0);
  a.lookAt(1, 1, 1.41421356); 
  cout << a << endl;
  a.setAirSpeed(100);

  for(int i = 0; i < 100; i++)
  {
    a.update(0.01);
  }

  cout << a << endl;
  return 0;
}