#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
  unordered_map<int, string> m;

  m[101] = "Harsh";
  m[103] = "Mukul";
  m[105] = "Juhu";
  m[107] = "Harsh";
  m[109] = "Harshit";

  for (auto ele : m)
  {
    cout << ele.first << " " << ele.second << endl;
  }

  cout << endl;

  cout << m.size() << endl;

  return 0;
}