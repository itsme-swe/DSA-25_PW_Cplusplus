#include <iostream>

using namespace std;

int main()
{

  int x = 20;

  int *p = &x;

  cout << p << endl; // Storing address of x " 0x61ff08 "

  cout << *p << endl; // '*' dereference operator used to print the value stored at the address. 20

  *p = 30; // Even we can update the value using pointers.

  cout << x << endl;

  return 0;
}