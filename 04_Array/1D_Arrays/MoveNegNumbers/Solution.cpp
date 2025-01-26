/*
💥 Move all negative numbers to end and positive numbers to the beginning with contant extra space.

*/

#include <iostream>
#include <vector>

using namespace std;

void moveNumbers(vector<int> &nums)
{
  int n = nums.size();

  int s = 0;
  int e = n - 1;

  while (s < e)
  {
    if (nums[s] > 0)
    {
      s++;
    }
    else if (nums[e] < 0)
    {
      e--;
    }
    else if (nums[s] < 0 && nums[e] > 0)
    {
      swap(nums[e], nums[s]);
      s++;
      e--;
    }
  }
}

int main()
{
  vector<int> vec = {1, -2, 3, -4, -5, 6};

  moveNumbers(vec);

  for (auto ele : vec)
  {
    cout << ele << " ";
  }
  cout << endl;

  return 0;
}

// op: 1 6 3 -4 -5 -2