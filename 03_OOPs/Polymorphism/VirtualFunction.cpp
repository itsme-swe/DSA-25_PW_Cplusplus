#include <iostream>

using namespace std;

class Base
{

public:
  virtual void display()
  {
    cout << "Display method of Base class" << endl;
  }
};

class Derived : public Base
{

public:
  void display() override
  {
    cout << "Display method of Derived class" << endl;
  }
};

int main()
{

  Base *ptr = new Derived();

  ptr->display();

  return 0;
}

// o/p: Display method of Derived class