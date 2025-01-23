#include <iostream>
#include <set>

using namespace std;

int main()
{
  set<int> s;

  s.insert(10);
  s.insert(15);
  s.insert(5);
  s.insert(1);
  s.insert(13);
  s.insert(5);

  // Dereferencing bcoz lower_bound return an iterator
  cout << *(s.lower_bound(3)) << endl; // o/p: 5

  cout << *(s.upper_bound(13)) << endl; // o/p: 15

  for (auto ele : s)
  {
    cout << ele << " ";
  }
  cout << endl;
  return 0;
}