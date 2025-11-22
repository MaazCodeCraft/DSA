
#include <iostream>
using namespace std;

class Student {

  string name;
  int rollNo;

public:
  // Default Constructor
  Student() {
    cout << "Default constructor are called.\n";
    name = "";
    rollNo = 0;
  }

  // Parameterized Constructor
  /*
  Student(string n, int r) {
    cout << "Parameterized constructor are called.\n";
    name = n;
    rollNo = r;
  }
  */

  /*
  Student(string n, int r) : name(n), rollNo(r) {
    cout << "Parameterized constructor are called.\n";
  }
  */

  Student(string name, int rollNo) {
    cout << "Parameterized constructor are called.\n";
    this->name = name;
    this->rollNo = rollNo;
  }

  void printDetails() {
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
  }
};

int main() {
  Student s0;
  Student s1("Ali", 300);
  s1.printDetails();
  return 0;
}