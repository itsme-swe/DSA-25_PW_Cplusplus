/*
Given an array of integers nums which is sorted in ascending order, and an integer target, write a function to search target in nums. If target exists, then return its index. Otherwise, return -1.

You must write an algorithm with O(log n) runtime complexity.

LeetCode(704) - https://leetcode.com/problems/binary-search/

*/

#include <iostream>
#include <vector>

using namespace std;

int search(vector<int> &nums, int target)
{

  int n = nums.size();

  int low = 0;
  int high = n - 1;

  while (low <= high)
  {
    int mid = low + (high - low) / 2;

    if (nums[mid] == target)
    {
      return mid;
    }
    else if (nums[mid] < target)
    {
      low = low + 1;
    }
    else
    {
      high = mid - 1;
    }
  }
  return -1;
}

int main()
{
  vector<int> vec = {-1, 0, 3, 5, 9, 12};

  int target = 9;

  int ans = search(vec, target);

  cout << ans << endl;

  return 0;
}