#ifndef Base_h
#define Base_h

#include <iostream>
using namespace std;

class Base
{

public:
  void func1()
  {
    cout << "Func1 of base class" << endl;
  };
  void func2();
  void func3();
};

#endif