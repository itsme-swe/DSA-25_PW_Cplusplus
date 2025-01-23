#include <iostream>

using namespace std;

#include "Car.h"
#include "Innova.h"
#include "Swift.h"

int main()
{

  Car *c = new Innova();

  c->start(); // Innova Started
  c->stop();  // Innova Stoped

  c = new Swift();

  c->start(); // Swift Started
  c->stop();  // Swift Stoped

  return 0;
}