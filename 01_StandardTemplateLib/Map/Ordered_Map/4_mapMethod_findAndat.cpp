#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<char, int> mp = {{'A', 101}, {'B', 301}, {'D', 201}, {'C', 101}, {'E', 505}};

  cout << mp.at('A') << endl; // Return the value if key is present otherwise throws an exception.

  if (mp.find('B') != mp.end())
  {
    cout << "Key found" << endl;
  }
  else
  {
    cout << "Key not found" << endl;
  }
  return 0;
}