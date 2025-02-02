/*
Given an input string s, reverse the order of the words.

A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

Return a string of the words in reverse order concatenated by a single space.

Note that s may contain leading or trailing spaces or multiple spaces between two words. The returned string should only have a single space separating the words. Do not include any extra spaces.

Leetcode(151) - https://leetcode.com/problems/reverse-words-in-a-string/description/

*/

#include <iostream>
#include <algorithm>

using namespace std;

string reverseWords(string s)
{
  int n = s.length();

  string ans = ""; // Initialize an empty string to store the result

  reverse(s.begin(), s.end()); // Reverse the entire string

  for (int i = 0; i < n; i++)
  {
    string word = ""; // Initialize an empty string to store each word

    // Extract each word from the reversed string
    while (i < n && s[i] != ' ')
    {
      word += s[i];
      i++;
    }

    if (!word.empty())
    {
      reverse(word.begin(), word.end());
      if (!ans.empty())
      {
        ans += " "; // Add a space between words in the result
      }

      ans += word; // Append the word to the result
    }
  }
  return ans;
}

int main()
{

  string s = "the sky is blue";

  cout << reverseWords(s) << endl;

  return 0;
}

// op: blue is sky the