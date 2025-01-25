#include <iostream>
#include <vector>

using namespace std;

void sortZerosAndOnes(vector<int> &arr)
{

  int n = arr.size();

  int noOfZeros = 0;
  int noOfOnes = 0;

  // 🔸 Counting 0's and 1's
  for (int i = 0; i < n; i++)
  {
    if (arr[i] == 0)
      noOfZeros++;
    else
      noOfOnes++;
  }

  cout << endl;

  // 🔸 Now, filling 0's first and then 1's
  for (int i = 0; i < n; i++)
  {
    if (i < noOfZeros)
      arr[i] = 0;
    else
      arr[i] = 1;
  }
}

int main()
{
  vector<int> vec = {0, 1, 0, 0, 1, 1, 0, 1, 0, 1};

  sortZerosAndOnes(vec);

  for (auto ele : vec)
  {
    cout << ele << " ";
  }
  cout << endl;

  return 0;
}

// op:  0 0 0 0 0 1 1 1 1 1