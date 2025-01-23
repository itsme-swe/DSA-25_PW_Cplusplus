#ifndef Swift_h
#define Swift_h

#include "Car.h"

#include <iostream>

using namespace std;

class Swift : public Car
{

public:
  void start() override
  {
    cout << "Swift Started" << endl;
  }

  void stop() override
  {
    cout << "Swift Stoped" << endl;
  }
};

#endif