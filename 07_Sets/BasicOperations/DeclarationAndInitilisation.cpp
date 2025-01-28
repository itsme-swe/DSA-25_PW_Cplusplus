#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
  unordered_set<int> s;

  s.insert(1);
  s.insert(2);
  s.insert(4);
  s.insert(1);
  s.insert(5);

  for (auto ele : s)
  {
    cout << ele << " ";
  }

  // op: 5 4 2 1
  cout << endl;

  return 0;
}

/*
💥 Set is the collection of unique elements, means that it automatically removes duplicates.
*/