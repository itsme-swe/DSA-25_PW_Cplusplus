#ifndef BASE_H
#define BASE_H

#include <iostream>
using namespace std;

class Base
{

  public:
  Base();

  Base(int x);

};

Base:: Base() {
  cout << "Non-Param Base Class" << endl;
}

Base:: Base(int x) {
  cout << "Param of Base Class " << x << endl;
}


#endif