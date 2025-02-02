/*
Given two strings s1 and s2, return true if s2 contains a permutation of s1, or false otherwise.

In other words, return true if one of s1's permutations is the substring of s2.

Leetcode(567) - https://leetcode.com/problems/permutation-in-string/description/
*/

#include <iostream>
#include <vector>

using namespace std;

bool isFreqSame(vector<int> &freq1, vector<int> &freq2)
{
  int n = freq1.size();
  for (int i = 0; i < n; i++)
  {
    if (freq1[i] != freq2[i])
    {
      return false;
    }
    return true;
  }
}

bool checkInclusion(string s1, string s2)
{
  vector<int> freq(26, 0);

  for (int i = 0; i < s1.length(); i++)
  {
    freq[s1[i] - 'a']++;
  }

  int windSize = s1.length(); // Store the length of s1 in windSize

  // Loop through each character in s2
  for (int i = 0; i < s2.length(); i++)
  {
    int windIdx = 0; // Index to track the characters inside the window
    int idx = i;     // Index to track the current position in s2

    vector<int> windFreq(26, 0);

    // Continue as long as the window size and s2 length allow
    while (windIdx < windSize && idx < s2.length())
    {
      windFreq[s2[idx] - 'a']++; // Increase the frequency of the current character in the window
      windIdx++;                 // Move the window's index to the next character
      idx++;                     // Move the index in s2 to the next character to process
    }

    if (isFreqSame(freq, windFreq))
    {
      return true;
    }
  }
  return false;
}
int main()
{
  string s1 = "ab";
  string s2 = "eidbaooo";

  cout << checkInclusion(s1, s2) << endl;

  return 0;
}