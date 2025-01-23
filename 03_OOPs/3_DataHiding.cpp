#include <iostream>

using namespace std;

class Rectangle
{

private:
  int length;
  int breadth;

  // 🔸 Getter and Setter Methods to access private data members
public:
  // Mutators
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

  // Accessors
  int getLength()
  {
    return length;
  }

  int getBreadth()
  {
    return breadth;
  }

public:
  int area()
  {

    return length * breadth;
  }
};

int main()
{

  Rectangle r1;
  r1.setLength(10);
  r1.setBreadth(5);

  cout << r1.area() << endl;

  return 0;
}