#include <iostream> 

#include "RectangleClass.h"
#include "CuboidClass.h"

using namespace std; 

int main(){

  Rectangle r1(10,10);

  cout << "The area of rectangle is " << r1.area() << endl;

  Cuboid c1(10, 5, 5);

  cout << "The volume of cuboid is " << c1.volume() << endl; 



  return 0;
}