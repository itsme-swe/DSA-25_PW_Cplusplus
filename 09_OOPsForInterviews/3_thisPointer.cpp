#include <iostream>

using namespace std;

class Teacher
{

public:
  string name;
  string subject;
  string dept;

  // 🔸 Using this pointer used to point the paramters name. Left hand side are data memebers name
  Teacher(string name, string subject, string dept)
  {
    this->name = name;
    this->subject = subject;
    this->dept = dept;
  }
};

int main()
{
  Teacher t1("Shradha", "English", "English Core");

  return 0;
}