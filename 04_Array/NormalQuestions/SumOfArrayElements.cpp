#include <bits/stdc++.h>
using namespace std;

int main()
{

  int arr[] = {2, 4, 6, 8, 10};

  int n = sizeof(arr) / sizeof(int);

  int sum = 0;

  for (int i = 0; i < n; i++)
  {

    sum += arr[i];
  }

  cout << "The sum of elements is: " << sum;

  return 0;
}