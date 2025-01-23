#include <iostream>
#include <deque>

using namespace std;

int main()
{

  deque<int> d;

  d.push_back(5); // Adding element from back
  d.push_back(7);
  d.push_back(9);
  d.push_front(3);
  d.push_front(1); // Adding element from front
  d.push_back(13);
  d.push_back(11);

  // 🔸 Iterator
  for (auto it = d.begin(); it != d.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  d.pop_back();  // Removing from back
  d.pop_front(); // Removing from front

  for (auto it = d.begin(); it != d.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  return 0;
}