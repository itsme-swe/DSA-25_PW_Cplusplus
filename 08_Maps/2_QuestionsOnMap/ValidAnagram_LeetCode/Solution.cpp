#include <iostream>
#include <unordered_map>

using namespace std;

bool isAnagram(string s, string t)
{
  int n = s.length();
  int m = t.length();

  if (n != m)
    return false;

  unordered_map<char, int> m1;
  unordered_map<char, int> m2;

  // Counting frequencies of string s inside map m1
  for (int i = 0; i < n; i++)
  {
    m1[s[i]]++;
  }

  // Counting frequencies of string t inside map m2
  for (int i = 0; i < m; i++)
  {
    m2[t[i]]++;
  }

  // Compare the two maps to see if they have the same characters with the same frequencies.
  for (auto x : m1)
  {
    char ch1 = x.first;   // key
    int freq1 = x.second; // value

    // Check if the character exists in the second map (m2).
    if (m2.find(ch1) != m2.end())
    {
      int freq2 = m2[ch1];
      if (freq1 != freq2)
        return false;
    }
    else
    {
      return false;
    }
  }
  return true;
}

int main()
{
  string s = "rat";
  string t = "car";

  cout << isAnagram(s, t) << endl;

  return 0;
}