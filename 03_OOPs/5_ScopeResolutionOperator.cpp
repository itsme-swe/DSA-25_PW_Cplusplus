#include <iostream>

using namespace std;

class Rectangle
{

private:
  // 🔸 Properties
  int length;
  int breadth;

public:
  // 🔸 Prototype of Parameterized Constructor
  Rectangle(int l, int b);

  // 🔸 Prototype of Mutators
  void setLength(int l);
  void setBreadth(int b);

  // 🔸Prototype of Area function
  int area();
};

// 🔸 Parameterized Constructor body, using scope resolution operator and "this pointer"
Rectangle::Rectangle(int length, int breadth)
{
  this->length = length;
  this->breadth = breadth;
}

void Rectangle::setLength(int l)
{
  length = l;
}

void Rectangle::setBreadth(int b)
{
  breadth = b;
}

int Rectangle::area()
{
  return length * breadth;
}

int main()
{

  Rectangle r1(10, 10);

  cout << "The area of rectangle is " << r1.area() << endl;

  return 0;
}

// o/p: The area of rectangle is 100