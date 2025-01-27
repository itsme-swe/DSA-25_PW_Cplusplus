#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void nextPermutation(vector<int> &nums)
{
  int n = nums.size();
  int pivotIdx = -1;

  for (int i = n - 2; i >= 0; i--)
  {
    if (nums[i] < nums[i + 1])
    {
      pivotIdx = i;
      break;
    }
  }

  if (pivotIdx == -1)
  {
    reverse(nums.begin(), nums.end());
  }

  reverse(nums.begin() + pivotIdx + 1, nums.end());

  int j = -1;
  for (int i = pivotIdx + 1; i < n; i++)
  {
    if (nums[i] > nums[pivotIdx])
    {
      j = i;
      break;
    }
  }

  swap(nums[pivotIdx], nums[j]);

  return;
}

int main()
{
  vector<int> arr = {2, 3, 1}; // op: 3 1 2

  vector<int> arr1 = {1, 2, 3}; // op: 1 3 2

  nextPermutation(arr);
  nextPermutation(arr1);

  for (auto ele : arr)
  {
    cout << ele << " ";
  }
  cout << endl;

  for (auto ele : arr1)
  {
    cout << ele << " ";
  }
  cout << endl;

  return 0;
}