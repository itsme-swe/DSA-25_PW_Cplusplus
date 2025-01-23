#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{

  unordered_set<int> unset;

  unset.insert(10);
  unset.insert(5);
  unset.insert(1);
  unset.insert(8);
  unset.insert(10);
  unset.insert(3);

  for (int ele : unset)
  {
    cout << ele << " ";
  }
  cout << endl;

  // 🔸 Find() method return true or false value if element is present in set or not
  if (unset.find(5) != unset.end())
  {
    cout << "5 is present." << "\n";
  }
  else
  {
    cout << "5 is not present" << endl;
  }

  return 0;
}