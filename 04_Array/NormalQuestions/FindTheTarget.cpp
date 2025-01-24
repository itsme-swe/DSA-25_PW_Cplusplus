#include <iostream>

using namespace std;

int linearSearch(int a[], int size, int target)
{
  for (int i = 0; i < size; i++)
  {
    if (a[i] == target)
    {
      return i;
    }
  }
  return -1;
}

int main()
{

  int arr[] = {4, 2, 7, 8, 1, 2, 5};

  int target = 8;

  int n = sizeof(arr) / sizeof(int);

  cout << "The index value of target is: ";

  cout << linearSearch(arr, n, target);

  return 0;
}