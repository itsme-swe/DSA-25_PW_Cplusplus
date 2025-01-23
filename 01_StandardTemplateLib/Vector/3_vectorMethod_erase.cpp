#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> vec = {2, 4, 6, 8, 10, 12, 14};

  vector<int>::iterator it;

  vec.erase(vec.begin());

  for (int ele : vec)
  {
    cout << ele << " ";
  }
  cout << endl;

  // op: 4 6 8 10 12 14

  // 🔸 Now erasing a range from vector
  vec.erase(vec.begin() + 1, vec.begin() + 3); // This will remove indexVal 1 element and indexVal 2 element.

  for (int ele : vec)
  {
    cout << ele << " ";
  }
  cout << endl;
  // op: 4 10 12 14

  return 0;
}