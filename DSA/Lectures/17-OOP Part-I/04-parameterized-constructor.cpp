#include <iostream>
using namespace std;

class Student {

public:
  string name;
  int rollNo;

  // Default Constructor
  Student() {
    cout << "Default constructor are called.\n";
    name = "";
    rollNo = 0;
  }

  // Parameterized Constructor
  Student(string n, int r) {
    cout << "Parameterized constructor are called.\n";
    name = n;
    rollNo = r;
  }

  void printDetails() {
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
  }
};

int main() {
  Student s1;
  cout << "Before Setting Values.\n";
  s1.printDetails();

  cout << "After Setting Values.\n";
  s1.name = "Maaz Ur Rahman";
  s1.rollNo = 302;
  s1.printDetails();

  Student s2("Ali", 300);
  s2.printDetails();
  return 0;
}