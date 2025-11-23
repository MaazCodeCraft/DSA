
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

  Student(string n, int r) : name(n), rollNo(r) {
    cout << "Parameterized constructor are called.\n";
  }

  void printDetails() const {
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
  }
};

int main() {
  Student s1("Ali", 300);
  s1.printDetails();

  const Student s2("Maaz", 305);
  s2.printDetails();
  return 0;
}