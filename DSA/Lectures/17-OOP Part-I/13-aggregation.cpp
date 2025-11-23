#include <iostream>
using namespace std;

// Aggregation (has a): but unlike composition, both objects can exist
// independently.

class Engine {
  int horsepower;

public:
  Engine(int hp) : horsepower(hp) {
    cout << "Engine (" << horsepower << " HP) created.\n";
  }

  int getHP() { return horsepower; }

  ~Engine() { cout << "Engine (" << horsepower << " HP) destroyed.\n"; }
};

// Car class (has a pointer to engine, but does NOT own it)
class Car {
  string model;
  Engine *engine; // Aggregation

public:
  Car(string m, Engine *e) : model(m), engine(e) {
    cout << model << " Car created.\n";
  }

  void showCarInfo() {
    cout << "Car Model: " << model << endl;
    cout << "Engine HP: " << engine->getHP() << endl;
  }

  ~Car() {
    cout << model << " Car destroyed.\n";
    // Do NOT delete engine → aggregation
  }
};

int main() {
  Engine e1(150); // Engine exists independently

  Car c1("Toyota", &e1);
  c1.showCarInfo();

  Car *c2 = new Car("Honda", &e1);
  c2->showCarInfo();
  delete c2;

  return 0;
}