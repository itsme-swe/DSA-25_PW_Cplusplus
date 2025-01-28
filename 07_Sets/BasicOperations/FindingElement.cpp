#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
  unordered_set<int> st;

  st.insert(20);
  st.insert(15);
  st.insert(25);
  st.insert(12);
  st.insert(11);
  st.insert(20);

  int target = 35;

  if (st.find(target) != st.end())
  {
    cout << "Element Exist" << endl;
  }
  else
  {
    cout << "Does not exist" << endl;
  }

  return 0;
}