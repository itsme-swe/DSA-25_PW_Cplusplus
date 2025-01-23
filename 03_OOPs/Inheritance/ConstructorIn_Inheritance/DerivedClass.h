#ifndef Derived_h
#define Derived_h

#include "BaseClass.h"

#include <iostream> 

using namespace std; 

class Derived : public Base
{

  public:
  Derived();

  Derived (int a);

  Derived (int x, int y);

};

Derived:: Derived() {
  cout << "Non-Param of Derived" << endl;
}

Derived:: Derived(int a) {
  cout << "Param of derived class" << endl;
}

// Here we are using parameterized constructor of Base Class "int x" 
Derived:: Derived(int x, int y) : Base(x) {
  cout << "Param of Derived using of Base Class " << endl;
}


#endif