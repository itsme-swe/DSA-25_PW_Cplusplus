#include <iostream>
#include <vector>

using namespace std;

void sortZerosAndOnes(vector<int> &nums)
{

  int n = nums.size();

  int start = 0;

  int end = n - 1;

  while (start < end)
  {
    if (nums[end] == 1)
      end--;
    else if (nums[start] == 0)
      start++;
    else if (nums[start] == 1 && nums[end] == 0)
    {
      swap(nums[end], nums[start]);
      start++;
      end--;
    }
  }
}

int main()
{
  vector<int> vec = {0, 1, 0, 0, 1, 1, 0, 1, 0, 1};

  sortZerosAndOnes(vec);

  for (auto ele : vec)
  {
    cout << ele << " ";
  }
  cout << endl;
  return 0;
}

// op: 0 0 0 0 0 1 1 1 1 1 
