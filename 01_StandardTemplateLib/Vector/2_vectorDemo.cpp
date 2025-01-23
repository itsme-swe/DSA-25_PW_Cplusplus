#include <iostream>
#include <vector>

using namespace std;

int main()
{
  // This time we are using an iterator to traverse an vector instead of for loop
  vector<int>::iterator it;

  // 🔸 Declaration and Inisilization
  vector<int> vc = {2, 4, 6, 8, 10};

  for (it = vc.begin(); it != vc.end(); it++)
  {
    cout << *it << " ";
  }
  // op: 2 4 6 8 10
  cout << endl;

  vector<int> vc2(5, -1); // 🔸 Creating an vector of size 5 with -1 values, this syntax is mostly used in Dynamic programming

  for (it = vc2.begin(); it != vc2.end(); it++)
  {
    cout << *it << " ";
  }
  // op: -1 -1 -1 -1 -1
  cout << endl;

  return 0;
}