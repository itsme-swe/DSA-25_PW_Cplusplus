/*
💥 Finding Sub Arrays of an array.

*/

#include <iostream>

using namespace std;

int main()
{

  int arr[] = {1, 2, 3, 4, 5};

  int n = sizeof(arr) / sizeof(int);

  for (int i = 0; i < n; i++)
  {
    for (int j = i; j < n; j++)
    {
      for (int k = i; k <= j; k++)
      {
        cout << arr[k];
      }
      cout << " ";
    }
    cout << endl;
  }

  return 0;
}

/*
o/p:
1 12 123 1234 12345
2 23 234 2345
3 34 345
4 45
5
*/