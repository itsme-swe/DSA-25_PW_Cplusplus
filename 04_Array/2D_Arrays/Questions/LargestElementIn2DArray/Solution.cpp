#include <iostream>
#include <climits>

using namespace std;

int main()
{

  int arr[3][3] = {10, 5, 12, 1, 3, 5, 50, 20, 20};

  int maxVal = INT_MIN;

  for (int i = 0; i < 3; i++)
  {
    for (int j = 0; j < 3; j++)
    {
      if (arr[i][j] > maxVal)
        maxVal = arr[i][j];
    }
  }

  cout << endl;

  for (auto &row : arr)
  {
    for (auto ele : row)
    {
      cout << ele << " ";
    }
    cout << endl;
  }

  cout << endl;
  cout << "The max value is: " << maxVal << endl;

  return 0;
}