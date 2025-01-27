/*
ou are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order.

The final sorted array should not be returned by the function, but instead be stored inside the array nums1. To accommodate this, nums1 has a length of m + n, where the first m elements denote the elements that should be merged, and the last n elements are set to 0 and should be ignored. nums2 has a length of n.

Leetcode(88) - https://leetcode.com/problems/merge-sorted-array/description/
*/

#include <iostream>
#include <vector>

using namespace std;

void mergeSortedArrays(vector<int> &arr1, int m, vector<int> &arr2, int n)
{
  int index = m + n - 1;
  int i = m - 1;
  int j = n - 1;

  while (i >= 0 && j >= 0)
  {
    if (arr1[i] > arr2[j])
    {
      arr1[index--] = arr1[i--];
    }
    else
    {
      arr1[index--] = arr2[j--];
    }
  }

  while (j >= 0)
  {
    arr1[index--] = arr2[j--];
  }
}

int main()
{
  vector<int> num1 = {1, 2, 3, 0, 0, 0};

  int m = 3;

  vector<int> num2 = {2, 5, 6};

  int n = num2.size();

  mergeSortedArrays(num1, m, num2, n);

  for (auto ele : num1)
  {
    cout << ele << " ";
  }
  cout << endl;

  return 0;
}

// op: 1 2 2 3 5 6