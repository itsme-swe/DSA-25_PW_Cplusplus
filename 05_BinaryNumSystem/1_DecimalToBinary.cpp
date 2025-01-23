#include <iostream>

using namespace std;

int decToBin(int dec)
{
  int ans = 0;
  int pow = 1;

  while (dec > 0)
  {
    int rem = dec % 2;
    dec = dec / 2;

    ans += (rem * pow);
    pow *= 10;
  }
  return ans;
}

int main()
{

  int decimalNum = 50;

  cout << decToBin(decimalNum) << endl; // (50)₁₀ = (110010)₂   -- This means 50 base to the power 10 is equal to the binary 110010 base to the power 2.

  return 0;
}