#include <iostream>

using namespace std;

void swap(int &x, int &y)
{
  int temp = x;
  x = y;
  y = temp;

  return;
}

int main()
{

  int x = 10;
  int y = 20;

  swap(x, y);

  cout << "x: " << x << endl;
  cout << "y: " << y << endl;

  return 0;
}