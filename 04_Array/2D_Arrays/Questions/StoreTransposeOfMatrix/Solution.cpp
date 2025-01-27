/*
💥 Write a program to print the transpose of the matrix and store it new matrix.
*/
#include <iostream>

using namespace std;

int main()
{
  int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};

  int arr1[3][2];

  for (int j = 0; j < 3; j++)
  {
    for (int i = 0; i < 2; i++)
    {
      cout << arr[i][j] << " ";
    }
    cout << endl;
  }

  cout << endl;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      arr1[i][j] = arr[j][i];
    }
  }

  cout << endl;

  for (auto &row : arr1)
  {
    for (auto ele : row)
    {
      cout << ele << " ";
    }
    cout << endl;
  }
  return 0;
}