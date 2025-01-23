/*
💥 Finding maximum sum of sub array.

🔸 Brute Force Approach
 */
#include <iostream>
#include <climits>

using namespace std;

int main()
{

  int arr[] = {1, 2, 3, 4, 5};

  int n = sizeof(arr) / sizeof(int);

  int maxSum = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    int currSum = 0;
    for (int j = i; j < n; j++)
    {
      currSum += arr[j];
      maxSum = max(currSum, maxSum);
    }
  }

  cout << "Max subarray sum is " << maxSum << endl;
  return 0;
}

// Max subarray sum is 15