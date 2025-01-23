/*
💥 Write a program to calculate sum of two numbers using pointers.

*/

#include <iostream>

using namespace std;

int main()
{

  int x;
  int y;

  int *p1 = &x;
  int *p2 = &y;

  cout << "Enter first number: ";
  cin >> *p1;

  cout << "Enter second number: ";
  cin >> *p2;

  cout << "Sum of x + y: " << *p1 + *p2 << endl; // Sum of x + y: 30

  return 0;
}