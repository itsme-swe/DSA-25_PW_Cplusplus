#include <iostream>
#include <array>
#include <algorithm>

using namespace std;

int main()
{

  int arr[6] = {5, 1, 3, 6, 2, 10};

  int n = sizeof(arr) / sizeof(arr[0]);

  sort(arr, arr + n);

  for (int ele : arr)
  {
    cout << ele << " ";
  }
  cout << endl;

  return 0;
}

// o/p: 1 2 3 5 6 10