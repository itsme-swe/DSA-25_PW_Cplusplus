#include <iostream>

using namespace std;

class Rectangle
{

private:
  int length;
  int breadth;

public:
  void setLength(int l)
  {
    if (l >= 0)
    {
      length = l;
    }
    else
    {
      length = 0;
    }
  }

  void setBreadth(int b)
  {
    if (b >= 0)
    {
      breadth = b;
    }
    else
    {
      breadth = 0;
    }
  }

  // 🔸 Non-Paramterized Constructor
  Rectangle()
  {
    length = 0;
    breadth = 0;
  }

  // 🔸 Paramterized Constructor
  Rectangle(int l, int b)
  {
    setLength(l);
    setBreadth(b);
  }

  // 🔸 Copy Constructor
  Rectangle(Rectangle(&r))
  {
    length = r.length;
    breadth = r.breadth;
  }

  // 🔸 Function
  int area()
  {
    return length * breadth;
  }
};

int main()
{

  Rectangle r1(10, 10); // Calling Paramterized constructor

  Rectangle r2(r1); // Calling copy constructor and passing object r1 as argument.

  cout << "Area of rectangle r1 is " << r1.area() << endl;

  cout << "Area of rectangle r2 is " << r2.area() << endl;

  return 0;
}