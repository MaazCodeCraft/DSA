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

  // Copy Constructor
  Student(Student &ref) {
    cout << "Copy constructor are called.\n";
    name = ref.name;
    rollNo = ref.rollNo;
  }

  void printDetails() {
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
  }
};

int main() {
  Student s1("Ali", 300);
  s1.printDetails();

  Student s2 = s1;
  s2.rollNo = 305;
  s2.printDetails();
  s1.printDetails();
  return 0;
}