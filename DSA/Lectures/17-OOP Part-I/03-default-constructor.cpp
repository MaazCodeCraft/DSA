#include <iostream>
using namespace std;

class Student {

public:
  string name;
  int rollNo;

  Student() {
    cout << "Default constructor is called.\n";
    name = "";
    rollNo = 0;
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
  return 0;
}