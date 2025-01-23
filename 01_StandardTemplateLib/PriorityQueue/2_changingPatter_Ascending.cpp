#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main()
{

  priority_queue<int, vector<int>, greater<int>> q;

  q.push(20);
  q.push(5);
  q.push(10);
  q.push(15);
  q.push(25);

  while (!q.empty())
  {
    cout << q.top() << " ";
    q.pop();
  }
  cout << endl;

  return 0;
}

// op: 5 10 15 20 25

/*
💥 Summary:
By default priority queue pattern is in descending order, but in this manner we can change the pattern in ascending order.
 */