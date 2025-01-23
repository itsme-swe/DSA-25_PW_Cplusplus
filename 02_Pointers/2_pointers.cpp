#include <iostream>

using namespace std;

int main()
{

  int x = 10;

  int *p = &x; // Storing address of x inside pointer p.

  cout << &x << endl; // 0x61ff08

  cout << p << endl; // 0x61ff08

  cout << &p << endl; // Address of pointer p " 0x61ff08 "

  return 0;
}