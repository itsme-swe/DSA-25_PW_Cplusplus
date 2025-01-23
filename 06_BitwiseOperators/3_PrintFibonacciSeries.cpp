#include <iostream>

using namespace std;

int main()
{

  int n = 5;

  int a = 0;
  int b = 1;

  cout << a << " " << b << " ";

  for (int i = 1; i <= n; i++)
  {
    int nextNum = a + b;
    cout << nextNum << " ";
    a = b;
    b = nextNum;
  }

  return 0;
}

//op: 0 1 1 2 3 5 8 