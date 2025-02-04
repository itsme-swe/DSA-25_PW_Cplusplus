/*
You are given a sorted array consisting of only integers where every element appears exactly twice, except for one element which appears exactly once.

Return the single element that appears only once.

Your solution must run in O(log n) time and O(1) space.

LeetCode(540) - https://leetcode.com/problems/single-element-in-a-sorted-array/description/
*/

#include <iostream>
#include <vector>

using namespace std;

int singleNonDuplicate(vector<int> &nums)
{
  int n = nums.size();

  int st = 0;
  int ed = n - 1;

  if (n == 1)
    return nums[0];

  while (st <= ed)
  {
    int mid = st + (ed - st) / 2;

    if (mid == 0 && nums[0] != nums[1])
      return nums[mid];
    else if (mid == n - 1 && nums[n - 1] != nums[n - 2])
      return nums[mid];

    if (nums[mid - 1] != nums[mid] && nums[mid] != nums[mid + 1])
      return nums[mid];

    else if (mid % 2 == 0)
    {
      if (nums[mid - 1] == nums[mid])
        ed = mid - 1;
      else
        st = mid + 1;
    }
    else
    {
      if (mid % 2 != 0)
      {
        if (nums[mid - 1] == nums[mid])
          st = mid + 1;
        else
          ed = mid - 1;
      }
    }
  }

  return -1;
}

int main()
{
  vector<int> arr = {3, 3, 7, 7, 10, 11, 11};

  int ele = singleNonDuplicate(arr);

  cout << "The single element is: " << ele << endl;

  return 0;
}

// The single element is: 10