#include <iostream>
#include <cctype>
using namespace std;

bool isAlphaNum(char ch)
{
  if ((ch >= '0' && ch <= '9') || (tolower(ch) >= 'a' && tolower(ch) <= 'z'))
  {
    return true;
  }
  return false;
}

bool isPalindrome(string s)
{
  int st = 0;
  int ed = s.length() - 1;

  while (st < ed)
  {
    if (!isAlphaNum(s[st]))
    {
      st++;
      continue;
    }

    if (!isAlphaNum(s[ed]))
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
  string s = "A man, a plan, a canal: Panama";

  cout << isPalindrome(s) << endl;

  return 0;
}