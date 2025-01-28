/*
🔸 Given two strings s and t, return true if t is ananagram of s, and false otherwise.

LeetCode(242) -  https://leetcode.com/problems/valid-anagram/description/
*/

#include <iostream>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t)
{
  int n = s.length();
  int m = t.length();

  if (n != m)
    return false;

  unordered_map<char, int> mp1;

  // 💥 Counting frequencies
  for (int i = 0; i < n; i++)
  {
    mp1[s[i]]++; // For each character in 's', increase its count in the map
  }

  for (int i = 0; i < m; i++)
  {
    char ch = t[i];
    if (mp1.find(ch) != mp1.end())
    {
      // If the character exists, decrease its count in the map by 1.
      //  This is because we've found a matching character in 't'.
      mp1[ch]--;
      if (mp1[ch] == 0)
        mp1.erase(ch);
    }
    else
      return false;
  }

  if (mp1.size() > 0)
  {
    return false;
  }
  return true;
}

int main()
{
  string s = "listen";
  string t = "silent";

  cout << isAnagram(s, t) << endl;

  return 0;
}