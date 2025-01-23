/*
💥 Given an integer array nums, return an array answer such that answer[i] is equal to the product of all the elements of nums except nums[i].

  The product of any prefix or suffix of nums is guaranteed to fit in a 32-bit integer.

  You must write an algorithm that runs in O(n) time and without using the division operation.

Leetcode(238) : https://leetcode.com/problems/product-of-array-except-self/description/

 */

#include <iostream>
#include <vector>

using namespace std;

vector<int> productExceptSelf(vector<int> &nums)
{
  int n = nums.size();
  vector<int> ans(n, 1);

  // prefix
  for (int i = 1; i < n; i++)
  {
    ans[i] = ans[i - 1] * nums[i - 1];
  }
  // suffix
  int suffix = 1;
  for (int i = n - 2; i >= 0; i--)
  {
    suffix *= nums[i + 1];
    ans[i] *= suffix;
  }

  return ans;
}

int main()
{
  vector<int> nums = {-1, 1, 0, -3, 3};

  vector<int> ans = productExceptSelf(nums);

  for (auto ele : ans)
  {
    cout << ele << " ";
  }
  cout << endl;

  return 0;
}

// op: 0 0 9 0 0