#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
  string str = "Welcome";

  reverse(str.begin(), str.end());

  cout << str << endl;  // emocleW

  return 0;
}