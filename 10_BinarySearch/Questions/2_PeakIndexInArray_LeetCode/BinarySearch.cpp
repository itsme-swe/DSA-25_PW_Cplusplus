/*
You are given an integer mountain array arr of length n where the values increase to a peak element and then decrease.

Return the index of the peak element.

Your task is to solve it in O(log(n)) time complexity.

LeetCode(852) - https://leetcode.com/problems/peak-index-in-a-mountain-array/description/
*/

#include <iostream>
#include <vector>

using namespace std;

int peakIndexInMountainArray(vector<int> &nums)
{
  int n = nums.size();

  int st = 1;
  int ed = n - 2;

  while (st <= ed)
  {
    int mid = st + (ed - st) / 2;

    if (nums[mid] > nums[mid - 1] && nums[mid] > nums[mid + 1])
      return mid;
    else if (nums[mid] > nums[mid + 1])
      ed = mid - 1;
    else
      st = mid + 1;
  }

  return -1;
}

int main()
{
  vector<int> arr = {0, 2, 1, 0};

  int ans = peakIndexInMountainArray(arr);

  cout << "The peak index is: " << ans << endl;
  return 0;
}

// The peak index is: 1