#include <iostream>
#include <queue>

using namespace std;

int main()
{
  priority_queue<int> pq;

  pq.push(10);
  pq.push(20);
  pq.push(60);
  pq.push(15);
  pq.push(45);

  while (!pq.empty())
  {
    cout << pq.top() << " ";
    pq.pop();
  }
  cout << endl;

  // op: 60 45 20 15 10

  /*
  The highest value(highest priority) will be on top.
  */

  return 0;
}