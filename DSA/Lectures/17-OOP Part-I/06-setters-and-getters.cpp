
#include <iostream>
using namespace std;

class Student {
  string name;
  string nicNo;

public:
  Student() { cout << "Default constructor are called.\n"; }
  Student(string n, string nic) {
    cout << "Parameterized constructor are called.\n";
    setName(n);
    setNicNo(nic);
  }

  void setName(string n) {
    if (n.length() < 3) {
      cout << "Name must be at least 3 character long.\n";
    } else {
      name = n;
    }
  }

  void setNicNo(string nic) {
    if (nic.length() < 13) {
      cout << "CNIC must be at least 13 character long.\n";
    } else {
      nicNo = nic;
    }
  }

  string getName() { return name; }

  string getNicNo() { return nicNo; }

  void printDetails() {
    cout << "Name: " << getName() << endl;
    cout << "CNIC No: " << getNicNo() << endl;
  }
};

int main() {
  Student s1("Maaz Ur Rahman", "1320152520121");
  s1.printDetails();

  Student s2;
  s2.setName("Ma");
  s2.setNicNo("123321789123");
  cout << s2.getName() << endl;
  cout << s2.getNicNo() << endl;
  return 0;
}