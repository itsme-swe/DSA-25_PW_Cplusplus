#include <iostream> 

#include "Rectangle.h"

using namespace std; 

int main(){

  Rectangle r1;

  r1.setLength(10);
  r1.setBreadth(5);

  cout << "The area of rectangle is " << r1.area() << endl;

  cout << "The perimeter of rectangle is " << r1.perimeter() << endl;

  return 0;
}