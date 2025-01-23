#include <iostream>
#include <set>

using namespace std;

int main()
{
  set<int, greater<int>> st = {2, 1, 5, 1, 6, 3, 2};

  for (auto it = st.begin(); it != st.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}

/*
op: 6 5 3 2 1 -- This is how we can make sort in descending order
*/