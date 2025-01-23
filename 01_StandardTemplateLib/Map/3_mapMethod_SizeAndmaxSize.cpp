#include <iostream>
#include <map>

using namespace std;

int main()
{
  map<char, int> mp = {{'A', 101}, {'B', 301}, {'D', 201}, {'C', 101}, {'E', 505}};

  for (auto it = mp.begin(); it != mp.end(); it++)
  {
    cout << it->first << ": " << it->second << " ";
  }
  cout << endl;

  cout << "Size: " << mp.size() << endl; // 5

  cout << "Max Size: " << mp.max_size() << endl; // 178956970

  cout << mp.count('F') << endl; // Return 0 bcoz key is not present map, if key is present then it returns 1.
  cout << mp.count('A') << endl; // 1

  return 0;
}