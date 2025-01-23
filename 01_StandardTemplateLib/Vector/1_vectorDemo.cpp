#include <iostream>
#include <vector>

using namespace std;

int main()
{

  vector<int> vec;

  vec.push_back(10); // To add the value in stack
  vec.push_back(15);
  vec.push_back(20);
  vec.push_back(25);

  vec.pop_back(); // To remove the last value of stack

  for (int ele : vec)
  {
    cout << ele << " ";
  }
  cout << endl;

  cout << vec.size() << endl; // To find the number of elements present in vector

  cout << vec.capacity() << endl; // To find the capacity of vector

  cout << vec.at(2) << endl; // To find the value present at given index value

  cout << vec.front() << " " << vec.back() << "\n"; // Returns the first and last value of vector

  return 0;
}