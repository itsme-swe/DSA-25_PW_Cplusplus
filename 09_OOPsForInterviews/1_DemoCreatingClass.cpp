#include <iostream>

using namespace std;

// 💥 Syntax of class
class Teacher
{
public:
  string name; // 🔸 Properties/Attributes of class
  string dept;
  string subject;
  double salary; 

  // 🔸 Methods/Member function of class
  void changeDept(string newDept)
  {
    dept = newDept;
  }
};

int main()
{
  // 💥 Creating object of class Teacher
  Teacher t1;
  t1.name = "Seema";
  t1.subject = "C++";
  t1.dept = "Computer Science";

  cout << t1.name << endl;

  return 0;
}