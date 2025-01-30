#include <iostream>
#include <map>

using namespace std;

int main()
{

  map<int, int> m = {{1, 5}, {5, 10}, {3, 15}, {6, 10}, {4, 20}};

  cout << m.begin()->first << " " << m.begin()->second << endl; // It will return the first element of map in key:value pair

  cout << (--m.end())->first << " " << (--m.end())->second << endl; // And, this will return the last key:value pair of map

  return 0;
}