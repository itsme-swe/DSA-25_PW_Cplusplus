#include <iostream>

using namespace std;

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

  // 🔸 Creating parameterized constructor
  Teacher(string n, string s, string d)
  {
    name = n;
    subject = s;
    dept = d;
  }

  // 🔸 Creating Copy constructor
  Teacher(Teacher(&t))
  {
    this->name = t.name;
    this->subject = t.subject;
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

  return 0;
}