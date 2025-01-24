#include <iostream>

using namespace std;

int main()
{

  int x = 20;

  int *p = &x;

  int **ptr = &p; // Storing address of pointer

  cout << p << endl; // Address of x " 0x61ff08 "

  cout << ptr << endl; // Address of pointer p " 0x61ff04 "

  cout << **ptr << endl; // Value of x " 20 "

  return 0;
}