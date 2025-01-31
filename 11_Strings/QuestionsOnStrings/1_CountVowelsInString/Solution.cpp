#include <iostream>

using namespace std;

int main()
{

  string vow = "Umberalla";

  int count = 0;

  int i = 0;

  while (vow[i] != '\0')
  {

    if (vow[i] == 'a' || vow[i] == 'e' || vow[i] == 'i' || vow[i] == 'o' || vow[i] == 'u')
    {
      count++;
    }
    i++;
  }

  cout << count << endl;

  return 0;
}