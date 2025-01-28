#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
  unordered_map<int, string> mp;

  pair<int, string> p1;
  p1.first = 101;
  p1.second = "Harsh";

  pair<int, string> p2;
  p2.first = 102;
  p2.second = "Juhu";

  pair<int, string> p3;
  p3.first = 105;
  p3.second = "Mukul";

  pair<int, string> p4;
  p4.first = 104;
  p4.second = "Harsh";

  pair<int, string> p5;
  p5.first = 106;
  p5.second = "Rashu";

  mp.insert(p1);
  mp.insert(p2);
  mp.insert(p3);
  mp.insert(p4);
  mp.insert(p5);

  // 🔸 Method-1 to iterate over map
  for (pair<int, string> p : mp)
  {
    cout << p.first << " " << p.second << endl;
  }

  cout << endl;

  // 🔸 Method-2 to iterate over map using iterator
  for (auto it = mp.begin(); it != mp.end(); it++)
  {
    cout << it->first << " " << it->second << endl;
  }

  return 0;
}