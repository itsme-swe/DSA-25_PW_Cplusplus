/*
💥 Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

You may assume that each input would have exactly one solution, and you may not use the same element twice.

You can return the answer in any order.

Leetcode(1) - https://leetcode.com/problems/two-sum/description/

*/

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &num, int target)
{
  int n = num.size();

  vector<int> ans;
  unordered_map<int, int> m;

  for (int i = 0; i < n; i++)
  {
    int remVal = target - num[i];
    if (m.find(remVal) != m.end())
    {
      ans.push_back(m[remVal]);
      ans.push_back(i);
    }
    else
      m[num[i]] = i;
  }
  return ans;
}

int main()
{
  vector<int> arr = {2, 7, 11, 15};
  int target = 9;

  vector<int> indx = twoSum(arr, target);

  for (auto x : indx)
  {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}