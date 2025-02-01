/*
A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Leetcode(125) - https://leetcode.com/problems/valid-palindrome/
*/

#include <iostream>
#include <cctype>
using namespace std;

bool isPalindrome(string s)
{
  int st = 0;
  int ed = s.length() - 1;

  while (st < ed)
  {
    if (!isalnum(s[st]))
    {
      st++;
      continue;
    }
    if (!isalnum(s[ed]))
    {
      ed--;
      continue;
    }

    if (tolower(s[st]) != tolower(s[ed]))
    {
      return false;
    }

    st++;
    ed--;
  }

  return true;
}

int main()
{
  string s = "madam";

  cout << isPalindrome(s) << endl;

  return 0;
}