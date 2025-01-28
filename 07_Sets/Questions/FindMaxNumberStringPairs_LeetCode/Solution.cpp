/*
💥 Find Maximum Number of String Pairs

You are given a 0-indexed array words consisting of distinct strings.

The string words[i] can be paired with the string words[j] if:

The string words[i] is equal to the reversed string of words[j].
0 <= i < j < words.length.
Return the maximum number of pairs that can be formed from the array words.

Note that each string can belong in at most one pair.

LeetCode(2744) - https://leetcode.com/problems/find-maximum-number-of-string-pairs/
*/

#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>

using namespace std;

int maximumNumberOfStringPairs(vector<string> &arr)
{
  int n = arr.size();

  int count = 0; // Reversed pairs ka count track karne ke liye.

  unordered_set<string> st;

  // Hum yaha array ke har string ko process karenge ek-ek karke.
  for (int i = 0; i < n; i++)
  {
    string rev = arr[i]; // 'rev' mei current string ka ek copy create kar rahe hai.

    reverse(rev.begin(), rev.end()); // 'rev' string ko reverse karte hai.

    // Agar 'rev' set ke andar milta hai, to iska matlab ek reversed pair mil gaya hai.
    if (st.find(rev) != st.end())
      count++; // Pair milne par count badha dete hai.
    else
      st.insert(arr[i]); // Agar 'rev' nahi mila, to current string ko set mei add karte hai.
  }
  return count;
}

int main()
{
  vector<string> st = {"ku", "dd", "gu", "uk"};

  int numOfpairs = maximumNumberOfStringPairs(st);

  cout << numOfpairs << endl;

  return 0;
}