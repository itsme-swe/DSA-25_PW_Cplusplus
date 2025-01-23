#include <iostream>

using namespace std;

class Base
{

public:
  void display()
  {
    cout << "Display Method of Base Class " << endl;
  }
};

class Derived : public Base
{
public:
  void display()
  {
    cout << "Display Method of Derived Class";
  }
};

int main()
{

  Base *obj = new Derived();

  obj->display(); // o/p: Display Method of Base Class

  Derived d1;

  d1.display(); // o/p: Display Method of Derived Class

  return 0;
}