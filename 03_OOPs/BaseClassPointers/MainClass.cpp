#include <iostream>

#include "Base.h"
#include "DerivedClass.h"

using namespace std;

int main()
{

  Derived d1;
  d1.func1();
  d1.func4();

  // 🔸 Base class pointer and Derived class object to access Base class members
  Base *p = new Derived();

  p->func1();

  return 0;
}

/*
Func1 of base class
Func4 of Derived Class
Func1 of base class
*/