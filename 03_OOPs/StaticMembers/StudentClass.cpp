#include <iostream>

using namespace std;

class Student
{

public:
  int rollNo;
  string name;
  static int admsonNo;

  Student(string n)
  {
    admsonNo++;
    rollNo = admsonNo;
    name = n;
  }

  void display()
  {
    cout << "Student Name: " << name << endl;
    cout << "RollNo: " << rollNo << endl;
  }
};
// Re-defining static variable globally and making it only accessible by class Student
int Student::admsonNo = 0;

int main()
{

  Student s1("Harsh");
  Student s2("Juhi");
  Student s3("Vandana");
  Student s4("Mukul");
  Student s5("Gargi");
  Student s6("Lata");
  Student s7("Megha");
  Student s8("John");

  s1.display();
  s2.display();

  cout << "Number of admission: " << Student::admsonNo << endl;

  return 0;
}