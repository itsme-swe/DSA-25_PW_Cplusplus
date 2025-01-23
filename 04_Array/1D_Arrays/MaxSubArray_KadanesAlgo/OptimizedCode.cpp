/*
💥 Maximum Subarray

Given an integer array nums, find the subarray with the largest sum, and return its sum.

LeetCode(53): https://leetcode.com/problems/maximum-subarray/description/

*/
#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int maxSubArray(vector<int> &nums)
{
  int currSum = 0;
  int maxSum = INT_MIN;

  for (auto val : nums)
  {
    currSum += val;
    maxSum = max(currSum, maxSum);

    if (currSum < 0)
      currSum = 0;
  }
  return maxSum;
}

int main()
{
  vector<int> arr = {-2, 1, -3, 4, -1, 2, 1, -5, 4};

  int maxSumSubarray = maxSubArray(arr);

  cout << "The max sum is " << maxSumSubarray << endl;
  return 0;
}