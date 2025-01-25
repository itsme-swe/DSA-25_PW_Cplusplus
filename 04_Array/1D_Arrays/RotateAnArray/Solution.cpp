/*
💥 Given an integer array nums, rotate the array to the right by k steps, where k is non-negative.

LeetCode(189) : https://leetcode.com/problems/rotate-array/description/

*/
#include <iostream>
#include <vector>

using namespace std;

void reverse(int i, int j, vector<int> &arr)
{
  while (i < j)
  {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    i++;
    j--;
  }
  return;
}

int main()
{
  vector<int> vec = {1, 2, 3, 4, 5, 6, 7};

  int n = vec.size();

  int k = 20;

  // Edge case -- Agar kbhi k ki value n sae badi hui toh joh bhi remainder ayega hum utnae rotation karenge
  if (k > n)
  {
    k = k % n;
  }

  reverse(0, n - k - 1, vec);
  reverse(n - k, n - 1, vec);
  reverse(0, n - 1, vec);

  for (auto ele : vec)
  {
    cout << ele << " ";
  }
  cout << endl;

  return 0;
}

// 2 3 4 5 6 7 1