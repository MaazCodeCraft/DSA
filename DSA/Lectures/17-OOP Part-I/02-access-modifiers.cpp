#include <iostream>
using namespace std;

// Access modifiers
//  private =  data & methods accessible inside a class & friends class
//  public = data & methods accessible anywhere
//  protected = accessible in derived classes but not outside the class
//  hierarchy
class Student {
private:
  string nicNo;

public:
  string name;
  int rollNo;
  float cgpa;

  void getPercentage() { cout << "CGPA: " << (cgpa * 100) / 4.00 << "%\n"; }
  void printDetails() {
    cout << "Name: " << name << endl;
    cout << "Roll No: " << rollNo << endl;
    cout << "Nic No: " << nicNo << endl;
    getPercentage();
  }
};

int main() {
  Student s1; // object
  s1.name = "Maaz Ur Rahman";
  s1.rollNo = 302;
  s1.cgpa = 3.8;
  // s1.nicNo = "12221-1122336-5"; //"Student::nicNo" is inaccessible
  s1.printDetails();
  return 0;
}