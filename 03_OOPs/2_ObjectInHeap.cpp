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

  // This is how we create an object inside Heap memory using pointer
  Rectangle *ptr = new Rectangle();

  ptr->length = 10;
  ptr->breadth = 5;

  cout << "Area of rectangle is " << ptr->area();

  return 0;
}