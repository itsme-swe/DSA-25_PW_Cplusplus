#include <iostream>
#include <deque>

using namespace std;

int main()
{

  deque<int> dq = {2, 4, 6, 8, 12, 14, 16};

  for (int ele : dq)
  {
    cout << ele << " ";
  }
  cout << endl;

  cout << dq.at(3) << endl; // This is known as Random Accessing any indexValue, but this is not possible with List.

  return 0;
}