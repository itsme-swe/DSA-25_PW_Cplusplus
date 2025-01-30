/*
💥 Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

LetCode(1207) - https://leetcode.com/problems/unique-number-of-occurrences/description/

*/

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>

using namespace std;

bool uniqueOccurrences(vector<int> &nums)
{
  int n = nums.size();

  unordered_map<int, int> m;

  for (int i = 0; i < n; i++)
  {
    m[nums[i]]++;
  }

  unordered_set<int> s;

  for (auto x : m)
  {
    int freq = x.second; // value part of map elements
    if (s.find(freq) != s.end())
      return false;
    else
      s.insert(freq);
  }
  return true;
}

int main()
{
  vector<int> arr = {-3, 0, 1, -3, 1, 1, 1, -3, 10, 0};

  bool ans = uniqueOccurrences(arr);

  cout << ans << endl;

  return 0;
}

// This will return 1, which stands for true.