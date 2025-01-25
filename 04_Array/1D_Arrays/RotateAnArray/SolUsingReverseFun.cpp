/*
💥 Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

LeetCode(189) : https://leetcode.com/problems/rotate-array/description/

*/
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverse(vector<int> &nums, int k)
{
  int n = nums.size();

  if (k > n)
  {
    k = k % n;
  }

  reverse(nums.begin(), nums.begin() + n - k);
  reverse(nums.begin() + n - k, nums.end());
  reverse(nums.begin(), nums.end());
}

int main()
{
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

  int k = 20;

  reverse(vec, k);

  for (auto it = vec.begin(); it != vec.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}