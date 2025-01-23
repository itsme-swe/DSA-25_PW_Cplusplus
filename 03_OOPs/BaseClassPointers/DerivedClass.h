#ifndef Derived_h
#define Derived_h

#include <iostream>
using namespace std;

#include "Base.h"

class Derived : public Base
{

public:
  void func4() {
    cout << "Func4 of Derived Class " << endl;
  };
  void func5();
};

#endif
