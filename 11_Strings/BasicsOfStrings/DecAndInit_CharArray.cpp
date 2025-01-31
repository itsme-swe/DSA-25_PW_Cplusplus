#include <iostream>

using namespace std;

int main()
{
  // Character Array
  char chArray[] = {'H', 'A', 'R', 'S', 'H'};

  // The loop will till the ith value will not reach to the null character
  for (int i = 0; chArray[i] != '\0'; i++)
  {
    cout << chArray[i] << " ";
  }
  cout << endl;

  return 0;
}

// H A R S H ♣