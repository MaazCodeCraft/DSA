#include <iostream>
using namespace std;

class Teacher {
public:
  Teacher() { cout << "Teacher object has been created.\n"; }

  ~Teacher() { cout << "Teacher object has been destroy.\n"; }
  int salary;
  string subject;
};

class Student {
public:
  int rollNo;
  float cgpa;

  Student() { cout << "Student object has been created.\n"; }

  ~Student() { cout << "Student object has been destroy.\n"; }
};

class TA : public Student, public Teacher {
public:
  string name;

  TA() { cout << "TA object has been created.\n"; }

  ~TA() { cout << "TA object has been destroy.\n"; }

  void printDetails() {
    cout << name << endl;
    cout << rollNo << endl;
    cout << cgpa << endl;
    cout << salary << endl;
    cout << subject << endl;
  }
};

int main() {
  TA t1;
  t1.name = "Maaz";
  t1.rollNo = 300;
  t1.cgpa = 3.87;
  t1.subject = "CS";
  t1.salary = 100'000;

  t1.printDetails();
  return 0;
}