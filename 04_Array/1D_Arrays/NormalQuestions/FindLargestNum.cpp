#include <iostream>
#include <climits>

using namespace std;

int main()
{

  int arr[] = {20, 10, 50, 65, 30};

  int size = sizeof(arr) / sizeof(int);

  int maxVal = INT_MIN;

  for (int i = 0; i < size; i++)
  {
    maxVal = max(arr[i], maxVal);
  }

  cout << "The max value in array is: " << maxVal << endl; // 65

  return 0;
}