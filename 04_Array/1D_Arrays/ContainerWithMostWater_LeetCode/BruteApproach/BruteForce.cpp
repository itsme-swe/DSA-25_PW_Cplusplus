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
  int maxWater = 0;

  for (int i = 0; i < nums.size(); i++)
  {
    for (int j = i + 1; j < nums.size(); j++)
    {
      int w = j - i;
      int ht = min(nums[i], nums[j]);
      int currWater = w * ht;

      maxWater = max(maxWater, currWater);
    }
  }

  return maxWater;
}

int main()
{

  vector<int> vec = {1, 8, 6, 2, 5, 4, 8, 3, 7};

  int maxWaterContainer = maxArea(vec);

  cout << maxWaterContainer << endl;
  
  return 0;
}