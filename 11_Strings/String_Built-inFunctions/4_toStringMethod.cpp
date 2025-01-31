#include <iostream>

using namespace std;

int main()
{

  int x = 12345;

  string s = to_string(x); // Method converts integer into string bcoz typecasting in strings are not allowed

  cout << s << endl;

  return 0;
}