#include <iostream>
#include <deque>

using namespace std;

int main()
{

  deque<int> d = {20, 25, 30, 35, 40};

  d.insert(d.begin() + 1, 30); // 30 will be added @ indexVal 1

  for (int ele : d)
  {
    cout << ele << " ";
  }
  cout << endl;

  cout << d.size() << endl;
  return 0;
}

// op: 20 30 25 30 35 40