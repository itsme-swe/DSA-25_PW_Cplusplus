#include <iostream>

using namespace std;

bool findTarget(int a[], int n, int t)
{
  for (int i = 0; i < n; i++)
  {
    if (a[i] == t)
      return true;
  }
  return false;
}

int main()
{

  int arr[] = {2, 5, 8, 10, 14};

  int n = sizeof(arr) / sizeof(int);

  int target = 8;

  bool ans = findTarget(arr, n, target);

  if (ans)
    cout << "Target Present" << endl;
  else
    cout << "Target Absent" << endl;

  return 0;
}