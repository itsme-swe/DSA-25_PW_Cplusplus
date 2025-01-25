#include <iostream>
#include <vector>

using namespace std;

void sortZeroOnesAndTwos(vector<int> &nums)
{
  int n = nums.size();

  int l = 0;
  int m = 0;
  int h = n - 1;

  while (m <= h)
  {
    if (nums[m] == 0)
    {
      swap(nums[m], nums[l]);
      l++;
      m++;
    }
    else if (nums[m] == 1)
    {
      m++;
    }
    else if (nums[m] == 2)
    {
      swap(nums[h], nums[m]);
      h--;
    }
  }
}

int main()
{

  vector<int> vec = {2, 0, 1};

  sortZeroOnesAndTwos(vec);

  for (auto ele : vec)
  {
    cout << ele << " ";
  }
  cout << endl;

  return 0;
}