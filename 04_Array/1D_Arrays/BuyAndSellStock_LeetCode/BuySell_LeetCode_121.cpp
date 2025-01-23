/*
💥 You are given an array prices where prices[i] is the price of a given stock on the ith day.

    You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

    Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

    LeetCode(121) : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/

*/

#include <iostream>
#include <vector>

using namespace std;

int maxProfit(vector<int> &prices)
{
  int maxProfit = 0;  // Variable to store the maximum profit
  int bb = prices[0]; // Initial "buying price" set to the first price

  int n = prices.size();

  // Loop through the prices starting from the second day
  for (int i = 1; i < n; i++)
  {
    if (prices[i] > bb)
    {
      maxProfit = max(maxProfit, prices[i] - bb);
    }
    else
    {
      bb = min(bb, prices[i]);
    }
  }

  return maxProfit;
}
int main()
{
  vector<int> arr = {8, 5, 1, 4, 3};

  vector<int> arr1 = {7, 6, 4, 3, 1};

  int profit = maxProfit(arr);

  int profit1 = maxProfit(arr1);

  cout << "The value of max profit is " << profit << endl;

  cout << "The value of max profit1 is " << profit1 << endl;
  return 0;
}

/*
The value of max profit is 3
The value of max profit1 is 0
*/