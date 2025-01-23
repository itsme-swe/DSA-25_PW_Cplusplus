#include <iostream>
#include <stack>
using namespace std;

int main()
{

  stack<int> st;

  st.push(10);
  st.push(12);
  st.push(14);
  st.push(16);
  st.push(18);

  while (!st.empty())
  {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;

  return 0;
}