#include <iostream>

using namespace std;

int main()
{

  int arr1[2][3] = {{2, 4, 6}, {8, 6, 4}};
  int arr2[2][3] = {{1, 3, 7}, {5, 3, 1}};

  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      cout << arr1[i][j] + arr2[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}

/*
3 7 13
13 9 5
*/