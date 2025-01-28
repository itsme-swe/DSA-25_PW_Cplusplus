#include <iostream>

using namespace std;

class Teacher
{

  // 🔸 Data members with access modifiers(private and public)
private:
  double salary;

public:
  string name;
  string subject;
  string dept;

  // 🔸 Creating non-parameterized constructor
  Teacher()
  {
    cout << "Hello I am constructor" << endl;
  }

  // 🔸 Creating parameterized constructor
  Teacher(string n, string s, string d)
  {
    name = n;
    subject = s;
    dept = d;
  }

  // 🔸 Creating member function
  void getInfo()
  {
    cout << "Name: " << name << endl;
    cout << "Dept: " << dept << endl;
  }
};

int main()
{
  // 💥 Creating object and calling paramterized constructor
  Teacher t1("Sana", "CS", "Mechanical");

  t1.getInfo(); // Calling member function
  /*
  Name: Sana
  Dept: Mechanical
  */

  return 0;
}