#include <iostream>

using namespace std;

template <class T>
class Stack
{

private:
  T *stk;
  int top;
  int size;

public:
  Stack(int size)
  {
    this->size = size;
    top = -1;
    stk = new T[size];
  }

public:
  void push(T x);
  T pop();
  ;
};
// template function body
template <class T>
void Stack<T>::push(T x)
{
  if (top == size - 1)
  {
    cout << "Stack is full";
  }
  else
  {
    top++;
    stk[top] = x
  }
}

int main()
{

  Stack<int> s(10);
  s.push(20);
  s.push(10);

  return 0;
}