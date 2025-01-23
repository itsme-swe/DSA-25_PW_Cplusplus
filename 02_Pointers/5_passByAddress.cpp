#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;

  return;
}

int main()
{

  int a = 10;
  int b = 20;

  swap(&a, &b);

  cout << "a: " << a << endl;

  cout << "b: " << b << endl;

  return 0;
}

/*
a: 20
b: 10
*/