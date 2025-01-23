/*
💥 You are given an integer array height of length n. There are n vertical lines drawn such that the two endpoints of the ith line are (i, 0) and (i, height[i]).

Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

Leetcode(11):  https://leetcode.com/problems/container-with-most-water/description/

*/

#include <iostream>
#include <vector>

using namespace std;

int maxArea(vector<int> &nums)
{
  int n = nums.size();
  int lp = 0;     // leftPoint
  int rp = n - 1; // rightPoint

  int maxWater = 0;

  while (lp < rp)
  {
    int w = rp - lp;
    int ht = min(nums[lp], nums[rp]);
    int currWater = w * ht;

    maxWater = max(maxWater, currWater);

    (nums[lp] < nums[rp]) ? lp++ : rp--;
  }
  return maxWater;
}

int main()
{

  vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};

  int maxWaterContainer = maxArea(height);

  cout << maxWaterContainer << endl;

  return 0;
}

// 49