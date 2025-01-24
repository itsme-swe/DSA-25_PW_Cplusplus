/*
💥 Write a function to find out the first and the last digit of a number without returning anything using pointers.
*/
#include <iostream>

using namespace std;

void firstAndLastDigit(int n, int *p1, int *p2)
{
  *p2 = n % 10; // finding last digit using moduls opeartor

  while (n > 9)
  {
    n = n / 10;
  }
  *p1 = n;
}

int main()
{

  cout << "Enter the value of n: ";
  int n;
  cin >> n;

  int firstDigit;
  int lastDigit;

  int *p1 = &firstDigit;
  int *p2 = &lastDigit;

  firstAndLastDigit(n, p1, p2);

  cout << firstDigit << " " << lastDigit << endl;

  return 0;
}