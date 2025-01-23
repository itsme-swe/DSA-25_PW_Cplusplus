#include <iostream>
#include <map>
using namespace std;

int main()
{

  map<string, int> m;

  m["shoes"] = 100;
  m["shirts"] = 110;
  m["t-shirts"] = 90;
  m["jackets"] = 80;
  m["hoddies"] = 110;

  for (auto it = m.begin(); it != m.end(); it++)
  {
    cout << "Key:" << it->first << " - " << "value:" << it->second << endl;
  }
  cout << endl;
  return 0;
}

/*
Key:hoddies - value:110
Key:jackets - value:80
Key:shirts - value:110
Key:shoes - value:100
Key:t-shirts - value:90

The best practice is to use iterator to traverse an map. And map is sorted according to the keys in ascending order.
 */