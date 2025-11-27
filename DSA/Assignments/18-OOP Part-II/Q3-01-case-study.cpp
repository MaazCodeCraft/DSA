// Case Study 1: Hospital Management System
// Problem:
// Design a C++ program to manage patient information in a hospital. Implement
// the following classes: • A class "Person" with data members for name and age,
// and a virtual function "display". • A class "Patient" derived from "Person"
// with additional data members for patient ID, ailment, and status
// (admitted/discharged), and an overridden function "display". The program
// should create a list of patients, display their information, and demonstrate
// the use of the virtual function.
#include <iostream>
using namespace std;

class Person {
protected:
  string name;
  int age;

public:
  Person() : name(""), age(0) {
    cout << name << " Person Default constructor are called.\n";
  }
  Person(string n, int a) : name(n), age(a) {
    cout << name << " Person Parameterized constructor are called.\n";
  }

  ~Person() { cout << name << " patient are destroy.\n"; }

  virtual void display() {
    cout << "Name : " << name << endl;
    cout << "Age : " << age << endl;
  }
};

class Patient : public Person {
  int patientID;
  string ailment;
  string status;

public:
  Patient() : Person(), patientID(0), ailment(""), status("") {
    cout << patientID << " Default constructor are called.\n";
  }

  Patient(string n, int a, int id, string ail, string stat)
      : Person(n, a), patientID(id), ailment(ail), status(stat) {
    cout << patientID << " Parameterized constructor are called.\n";
  }

  ~Patient() { cout << patientID << " patient are destroy.\n"; }

  virtual void display() override {
    cout << "Name : " << this->name << endl;
    cout << "Age : " << this->age << endl;
    cout << "Patient Id : " << this->patientID << endl;
    cout << "Ailment : " << this->ailment << endl;
    cout << "Status : " << this->status << endl;
  }
};

int main() {
  Patient patient[10] = {Patient("Alice", 30, 101, "Flu", "Admitted"),
                         Patient("Bob", 40, 102, "Fracture", "Discharged"),
                         Patient("Charlie", 25, 103, "Allergy", "Admitted"),
                         Patient("David", 50, 104, "Cold", "Discharged"),
                         Patient("Eva", 35, 105, "Fever", "Admitted"),
                         Patient("Frank", 45, 106, "Asthma", "Discharged"),
                         Patient("Grace", 28, 107, "Migraine", "Admitted"),
                         Patient("Hannah", 33, 108, "Infection", "Discharged"),
                         Patient("Ian", 39, 109, "Diabetes", "Admitted"),
                         Patient("Jack", 41, 110, "Hypertension", "Discharged")

  };

  for (int i = 0; i < 10; i++) {
    patient[i].display();
  }
  return 0;
}