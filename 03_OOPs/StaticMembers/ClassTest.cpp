#include <iostream>

using namespace std;

class Test
{

public:
  int a;
  static int count;

  Test()
  {
    a = 10;
    count++;
  }

  static int getCount()
  {
    return count;
  }
};

int Test ::count = 0;

int main()
{
  Test t1, t2;

  // Accessing the static variable using object and it is common for all the objects of class
  cout << t1.count << endl;
  cout << t2.count << endl;

  t2.count = 10; // Here, changing value of static variable

  cout << t1.count << endl; // o/p: 10

  cout << Test ::getCount() << endl; // Accessing static function using scope resolution with class Test

  return 0;
}