#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void reverseArray(vector<int> &arr)
{

  int s = 0;
  int e = arr.size() - 1;

  while (s < e)
  {
    swap(arr[s], arr[e]);
    s++;
    e--;
  }
}

int main()
{
  vector<int> vec = {1, 2, 3, 4, 5};

  reverseArray(vec);

  for (auto it = vec.begin(); it != vec.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}

// 5 4 3 2 1