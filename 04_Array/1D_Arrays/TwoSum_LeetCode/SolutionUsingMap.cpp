#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int> &nums, int target)
{
  vector<int> ans;
  int n = nums.size();

  unordered_map<int, int> m;

  for (int i = 0; i < n; i++)
  {
    int rem = target - nums[i];

    if (m.find(rem) != m.end())
    {
      ans.push_back(m[rem]);
      ans.push_back(i);
    }
    else
    {
      m[nums[i]] = i;
    }
    
  }
  return ans;
}

int main()
{
  vector<int> vec = {2, 5, 11, 4};

  int target = 9;

  vector<int> sum = twoSum(vec, target);

  for (auto ele : sum)
  {
    cout << ele << " ";
  }
  cout << endl;

  return 0;
}