/*
💥 You are given an array nums consisting of positive integers.

You have to take each integer in the array, reverse its digits, and add it to the end of the array. You should apply this operation to the original integers in nums.

Return the number of distinct integers in the final array.

Leetcode(2442) - https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/description/

*/

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

int reverse(int n)
{
  int r = 0;
  while (n > 0)
  {
    r *= 10;
    r += (n % 10);
    n /= 10;
  }
  return r;
}

int countDistinctIntegrs(vector<int> &arr, unordered_set<int> &s)
{
  int n = arr.size();

  for (int i = 0; i < n; i++)
  {
    int rev = reverse(arr[i]);
    s.insert(arr[i]);
    s.insert(rev);
  }
  return s.size();
}

int main()
{
  vector<int> vec = {1, 13, 10, 12, 31};

  unordered_set<int> s;

  int distInt = countDistinctIntegrs(vec, s);

  cout << distInt << endl; // 6

  for (auto ele : s)
  {
    cout << ele << " ";
  }
  cout << endl;

  return 0;
}