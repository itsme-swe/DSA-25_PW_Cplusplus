#include <iostream>

using namespace std;

class Rectangle
{
public:
  int length;

  int breadth;

  int area()
  {
    return length * breadth;
  }
};

int main()
{

  Rectangle r1, r2;

  r1.length = 10;
  r1.breadth = 5;

  r2.length = 5;
  r2.breadth = 20;

  cout << "The area of rectangle r1 is " << r1.area() << endl;

  cout << "The area of rectangle r2 is " << r2.area() << endl;

  return 0;
}