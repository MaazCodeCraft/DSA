
#include <iostream>
using namespace std;

// Composition (has a): When one class (Class-A) contains objects of another
// class (Class-B) as data members

class Person {
  string name;
  int age;

public:
  Person(string n, int a) : name(n), age(a) {
    cout << name << "Person object has being created.\n";
  }

  ~Person() { cout << name << "Person object has been destroy.\n"; }

  void printDetails() {
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
  }
};

class Student {
  int rollNo;
  Person person;

public:
  Student(string n, int a, int r) : person(n, a), rollNo(r) {
    cout << rollNo << "Student object has being created.\n";
  }

  ~Student() { cout << rollNo << "Student object has been destroy.\n"; }

  void displayStudent() {
    person.printDetails();
    cout << "Roll No : " << rollNo << endl;
  }
};

int main() {
  Student s1("Maaz Ur Rahman", 19, 300);
  Student s2("Ali", 20, 310);
  s1.displayStudent();
  s2.displayStudent();
  return 0;
}