/*
💥 Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Leetcode(1):  https://leetcode.com/problems/two-sum/description/

*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{

  int n = nums.size();

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i + 1; j < n; j++)
    {
      if (nums[i] + nums[j] == target)
      {
        return {i, j};
      }
    }
  }
  return {};
}

int main()
{
  vector<int> v = {2, 7, 11, 15, 5, 4};

  int target = 9;

  vector<int> doublet = twoSum(v, target);

  for (auto ele : doublet)
  {
    cout << ele << " ";
  }
  cout << endl;

  return 0;
}