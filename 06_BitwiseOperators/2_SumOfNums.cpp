/*
Find the sum of 1 to n numbers

*/

#include <iostream>

using namespace std;

int main()
{
  int n = 5;

  int sum = 0;

  for (int i = 0; i <= n; i++)
  {
    sum += i;
  }

  cout << "The sum is: " << sum << endl;
  return 0;
}