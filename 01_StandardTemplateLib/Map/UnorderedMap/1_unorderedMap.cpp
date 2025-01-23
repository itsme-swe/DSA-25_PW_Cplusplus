#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
  unordered_map<string, int> um = {{"tv", 100}, {"ac", 50}, {"heater", 300}, {"freedge", 20}};

  um.emplace("range", 30);

  for (auto it = um.begin(); it != um.end(); it++)
  {
    cout << it->first << " " << it->second << " ";
  }
  cout << endl;
  return 0;
}