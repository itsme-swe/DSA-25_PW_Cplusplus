#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

  cout << "Enter the string: ";

  string s;

  getline(cin, s);

  cout << "Before reversed: " << s << endl;

  int n = s.size();

  reverse(s.begin(), s.begin() + n / 2);

  cout << "After reversed: " << s << endl;

  return 0;
}

/*
Before reversed: Welcome
After reversed: leWcome
*/