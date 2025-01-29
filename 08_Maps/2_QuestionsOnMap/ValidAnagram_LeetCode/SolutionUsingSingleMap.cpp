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

  // Dono strings ki length alag ho to anagram nahi ho sakti, to pehle hi return false kar diya.
  if (n != m)
    return false;

  unordered_map<char, int> mp1;

  // 💥 Count frequencies of characters in 's'
  for (int i = 0; i < n; i++)
  {
    mp1[s[i]]++; // For each character in 's', increase its count in the map
  }

  // Compare with 't'
  for (int i = 0; i < m; i++)
  {
    char ch = t[i];
    // Agar 't' ka character 's' ke frequency map me exist karta hai to...
    if (mp1.find(ch) != mp1.end())
    {
      mp1[ch]--; // Us character ki frequency kam kar denge.

      // Agar frequency 0 ho gayi, to us character ko map se hata denge.
      if (mp1[ch] == 0)
        mp1.erase(ch);
    }
    else
      return false; // Agar koi character milta hi nahi hai map me, to directly return false.
  }

  // Agar abhi bhi map me kuch bacha hai to ye anagram nahi hai.
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