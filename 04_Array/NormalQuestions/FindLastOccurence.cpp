#include <iostream>
#include <vector>

using namespace std;

int main()
{
  vector<int> v = {9, 10, 6, 12, 11, 6, 10};

  int n = v.size();

  int target = 10;

  int idx = -1;

  for (int i = n - 1; i >= 0; i--)
  {
    if (v[i] == target)
    {
      idx = i;
      break;
    }
  }

  cout << idx << endl; // Index = 6

  return 0;
}