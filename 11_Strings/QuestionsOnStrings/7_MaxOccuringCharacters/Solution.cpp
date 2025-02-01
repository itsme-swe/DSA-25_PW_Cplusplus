#include <iostream>
#include <vector>

using namespace std;

int main()
{

  string s = "leetcode";

  // Create a vector of size 26 (for lowercase English letters) initialized with 0
  vector<int> arr(26, 0);

  // Iterate through the string to count the frequency of each character
  for (int i = 0; i < s.length(); i++)
  {
    char ch = s[i];      // Extract the current character
    int ascii = (int)ch; // Get the ASCII value of the character
    arr[ascii - 97]++;   // Map 'a' to 0, 'b' to 1, ..., 'z' to 25 and increment count
  }

  // Find the maximum frequency in the array
  int max = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] > max)
      max = arr[i];
  }

  // Iterate through the array to find and print the character(s) with the highest frequency
  for (int i = 0; i < arr.size(); i++)
  {
    if (arr[i] == max)
    {
      int ascii = i + 97;
      char ch = (char)ascii;
      cout << ch << ":" << max << endl;
    }
  }

  return 0;
}