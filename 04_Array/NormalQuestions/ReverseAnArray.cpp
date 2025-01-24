/*
💥 To reverse an array we'll using "Two Pointer approach".
*/
#include <iostream>

using namespace std;

void swap(int a[], int i, int j)
{
  int temp = a[i];
  a[i] = a[j];
  a[j] = temp;
}

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

void reverseArray(int arr[], int n)
{
  int low = 0;
  int high = n - 1;

  while (low < high)
  {
    swap(arr[low], arr[high]);
    low++;
    high--;
  }
}

int main()
{
  int array[] = {1, 2, 3, 4, 5};

  int n = sizeof(array) / sizeof(int);

  reverseArray(array, n);

  printArray(array, n);
  return 0;
}