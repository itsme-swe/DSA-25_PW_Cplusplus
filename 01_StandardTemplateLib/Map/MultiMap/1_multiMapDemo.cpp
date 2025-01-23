#include <iostream>
#include <map>

using namespace std;

int main()
{
  multimap<string, int> mm = {{"tv", 100}, {"AC", 200}, {"tv", 200}, {"Heater", 500}};

  for (auto it = mm.begin(); it != mm.end(); it++)
  {
    cout << it->first << " " << it->second << " ";
  }
  cout << endl;
  return 0;
}