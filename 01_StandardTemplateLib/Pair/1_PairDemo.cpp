#include <iostream>
#include <vector>

using namespace std;

int main()
{

  pair<char, int> p = {'A', 10};

  cout << p.first << ":" << p.second << endl; // A:10

  pair<int, pair<char, int>> p1 = {1, {'B', 20}};

  cout << p1.first << " " << p1.second.first << ":" << p1.second.second << endl; // 1 B:20

  // 🔸 Creating pair of vector
  vector<pair<char, int>> vec = {{'A', 10}, {'B', 20}, {'C', 30}, {'D', 40}};

  for (auto it = vec.begin(); it != vec.end(); it++)
  {
    cout << it->first << ":" << it->second << " ";
  }
  cout << endl;
  //op: A:10 B:20 C:30 D:40 

  return 0;
}