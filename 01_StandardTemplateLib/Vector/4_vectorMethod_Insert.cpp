#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> vec = {10, 15, 20, 25, 30};

  vector<int>::iterator it;

  vec.insert(vec.begin() + 2, 18);  // Here, we inserted 18 @ indexVal 2.

  for (int ele : vec)
  {
    cout << ele << " ";
  }
  cout << endl;

  // op: 10 15 18 20 25 30

  return 0;
}