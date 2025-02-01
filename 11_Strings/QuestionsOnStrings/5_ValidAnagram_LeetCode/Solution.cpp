/*
Given two strings s and t, return true if t is an anagram of s, and false otherwise.

LeetCode(242) : https://leetcode.com/problems/valid-anagram/description/

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool isAnagram(string s, string t)
{
  int n = s.length();
  int m = t.length();

  sort(s.begin(), s.end());
  sort(t.begin(), t.end());

  if (s == t)
  {
    return true;
  }
  else
    return false;
}

int main()
{

  string s = "silent";
  string t = "listen";

  cout << isAnagram(s, t) << endl;

  return 0;
}

// 1 stands for true