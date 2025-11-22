#include <iostream>
using namespace std;

class Student {
public:
  // properties / attributes / data members
  string name;
  int rollNo;
  float cgpa;

  // member functions / methods
  void getPercentage() { cout << "CGPA: " << (cgpa * 100) / 4.00 << "%\n"; }

  void printDetails() {
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    getPercentage();
  }
};

int main() {
  Student s1, s2; // object
  s1.name = "Maaz Ur Rahman";
  s1.rollNo = 302;
  s1.cgpa = 3.8;
  s1.printDetails();

  s1.name = "Ali";
  s1.rollNo = 303;
  s1.cgpa = 3.72;
  s1.printDetails();
  return 0;
}