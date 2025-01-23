/*
💥Given a positive integer n, write a function that returns the number of set bits in its binary representation (also known as the Hamming weight).

LeetCode (191) -  https://leetcode.com/problems/number-of-1-bits/description/
*/

#include <iostream>

using namespace std;

int hammingWeight(int n)
{
  int count = 0;
  while (n != 0)
  {
    if (n & 1)
      count++;

    n = n >> 1;
  }
  return count;
}

int main()
{

  int n = 11;

  cout << hammingWeight(n) << endl;

  return 0;
}

//op: 3