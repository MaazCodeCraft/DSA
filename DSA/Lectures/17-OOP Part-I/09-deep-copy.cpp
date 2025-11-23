#include <iostream>
using namespace std;

class Car {
public:
  string name;
  string color;
  int *mileage;

  Car(string name, string color) {
    cout << "Parameterized constructor are called.\n";
    this->name = name;
    this->color = color;
    mileage = new int;
    *mileage = 12;
  }

  Car(Car &ref) {
    cout << "Copy constructor are called.\n";
    name = ref.name;
    color = ref.color;
    mileage = new int;
    *mileage = *ref.mileage; // deep copy
  }

  void printDetails() {
    cout << "Name : " << name << endl;
    cout << "Color : " << color << endl;
    cout << "Mileage : " << *mileage << endl;
  }
};

int main() {
  Car c1("Marutti", "Black");
  c1.printDetails();
  Car c2 = c1;
  *c2.mileage = 10;
  c2.printDetails();
  cout << *c1.mileage << endl; // 12 due to deep copy c1.milage and
                               // c2.mileage pointed different memory location
  return 0;
}