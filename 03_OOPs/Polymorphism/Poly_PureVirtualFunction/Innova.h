#ifndef Innova_h
#define Innova_h

#include "Car.h"

#include <iostream>

using namespace std;

class Innova : public Car
{

public:
  void start() override
  {
    cout << "Innova Started" << endl;
  }

  void stop() override
  {
    cout << "Innova Stoped" << endl;
  }
};

#endif