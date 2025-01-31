#include <iostream>

using namespace std;

int main()
{

  string name = "Harsh";

  name.push_back('u'); // Used to add char in string
  name.push_back('j');
  name.push_back('i');

  cout << name << endl; // Harshuji

  name.pop_back(); // used to remove last char from string

  cout << name << endl; // Harshuj

  string s = name + " Mehra"; // used to append string into new string

  cout << s << endl; // Harshuj Mehra

  return 0;
}