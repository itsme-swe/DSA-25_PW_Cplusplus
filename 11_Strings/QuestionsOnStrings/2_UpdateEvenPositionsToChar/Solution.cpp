#include <iostream>

using namespace std;

int main()
{

  string str = "Toyota";

  for (int i = 0; i < str[i] != '\0'; i++)
  {
    if (i % 2 == 0)
    {
      str[i] = 's';
    }
  }

  cout << str << endl;

  return 0;
}