#include <iostream>
#include <stack>

using namespace std;

int main()
{

  stack<int> s;

  s.push(1);
  s.push(3);
  s.push(5);
  s.push(7);
  s.push(9);

  s.pop();

  cout << s.top() << endl; // op: 7

  cout << "Values inside stack after pop :" << endl;
  while (!s.empty())
  {
    cout << s.top() << " ";
    s.pop();
  }
  cout << endl;

  return 0;
}