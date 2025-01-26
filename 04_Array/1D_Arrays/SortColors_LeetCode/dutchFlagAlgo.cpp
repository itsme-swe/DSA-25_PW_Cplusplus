/*
💥 Given an array nums with n objects colored red, white, or blue, sort them in-place so that objects of the same color are adjacent, with the colors in the order red, white, and blue.

We will use the integers 0, 1, and 2 to represent the color red, white, and blue, respectively.

You must solve this problem without using the library's sort function.

Leetcode: https://leetcode.com/problems/sort-colors/description/

*/

#include <iostream>
#include <vector>

using namespace std;

void sortZeroOnesAndTwos(vector<int> &nums)
{
  int n = nums.size();

  int l = 0;
  int m = 0;
  int h = n - 1;

  while (m <= h)
  {
    if (nums[m] == 0)
    {
      swap(nums[m], nums[l]);
      l++;
      m++;
    }
    else if (nums[m] == 1)
    {
      m++;
    }
    else if (nums[m] == 2)
    {
      swap(nums[h], nums[m]);
      h--;
    }
  }
}

int main()
{

  vector<int> vec = {2, 0, 1};

  sortZeroOnesAndTwos(vec);

  for (auto ele : vec)
  {
    cout << ele << " ";
  }
  cout << endl;

  return 0;
}