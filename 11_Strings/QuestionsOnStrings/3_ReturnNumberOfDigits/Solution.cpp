#include <iostream>

using namespace std;

int main()
{

  int x = 12345;

  string digits = to_string(x);

  cout << digits.length() << endl;

  return 0;
}

/*
💥 To return the digits first convert integer into string by using "to_string()" method and then return its length.
*/