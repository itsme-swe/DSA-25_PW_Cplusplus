#include <iostream>
#include <set>

using namespace std;

int main()
{

  set<int> st = {20, 10, 30, 15, 20, 10};

  for (auto ele : st)
  {
    cout << ele << " ";
  }
  cout << endl;

  cout << st.size(); // 4

  return 0;
}

/*
op: 10 15 20 30 by default set is sorted in ascending order and only stores unique values.
*/