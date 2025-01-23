#include <iostream>
#include <vector>
#include <list>
using namespace std;

int main()
{

  list<int> l;

  cout << "Size of list: " << l.size() << endl; // Return 0 bcoz write know its empty

  l.push_back(10); // Add value from back
  l.push_back(20);
  l.push_back(30);
  l.push_front(40);
  l.push_front(50); // Add value from front

  for (auto it = l.begin(); it != l.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  // op: 50 40 10 20 30

  cout << "Size of list: " << l.size() << endl;

  l.pop_back();  // Remove value from back
  l.pop_front(); // Remove value from front

  for (auto it = l.begin(); it != l.end(); it++)
  {
    cout << *it << " ";
  }
  cout << endl;

  // op: 40 10 20

  return 0;
}