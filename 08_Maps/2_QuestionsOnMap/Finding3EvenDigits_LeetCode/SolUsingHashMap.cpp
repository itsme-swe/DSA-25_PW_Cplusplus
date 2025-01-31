/*
You are given an integer array digits, where each element is a digit. The array may contain duplicates.

You need to find all the unique integers that follow the given requirements:

The integer consists of the concatenation of three elements from digits in any arbitrary order.
The integer does not have leading zeros.
The integer is even.
For example, if the given digits were [1, 2, 3], integers 132 and 312 follow the requirements.

Return a sorted array of the unique integers.

LeetCode(2094) - https://leetcode.com/problems/finding-3-digit-even-numbers/
*/

#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

vector<int> findEvenNumbers(vector<int> &arr)
{
  int n = arr.size();
  vector<int> ans; // Vector to store the valid three-digit even numbers

  unordered_map<int, int> m; // Hash map to store the frequency of digits in arr

  for (auto x : arr)
  {
    m[x]++; // Store the frequency of each digit present in arr
  }

  for (int i = 100; i < 999; i += 2)
  {
    int x = i;

    int a = x % 10; // Extract the ones-place (last) digit
    x /= 10;

    int b = x % 10; // Extract the tens-place (middle) digit
    x /= 10;

    int c = x; // The remaining number is the hundreds-place (first) digit

    // Check if the digit 'a' exists in the frequency map
    if (m.find(a) != m.end())
    {
      m[a]--;        // if digit found in map temporarily reduce its frequency
      if (m[a] == 0) // if freq reaches 0, so remove from map
        m.erase(a);

      if (m.find(b) != m.end()) // Same goes with b
      {
        m[b]--;
        if (m[b] == 0)
          m.erase(b);

        if (m.find(c) != m.end())
          ans.push_back(i);
        m[b]++; // Restore the frequency of 'b' after checking
      }
      m[a]++; // Restore the frequency of 'a' after checking
    }
  }
  return ans;
}

int main()
{
  vector<int> vec = {2, 2, 8, 8, 2};

  vector<int> arr = findEvenNumbers(vec);

  for (auto ele : arr)
  {
    cout << ele << " ";
  }
  cout << endl;

  return 0;
}

// op: 222 228 282 288 822 828 882