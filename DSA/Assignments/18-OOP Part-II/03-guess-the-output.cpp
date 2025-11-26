#include <iostream>
using namespace std;

class Base {
public:
  virtual void print() { cout << "Base.\n"; }
};
class Derived : public Base {
public:
  void print() { cout << "Derived\n"; }
};

int main() {
  Base *b = new Derived(); // Runtime binding

  b->print(); // polymorphism → Derived (due to virtual function)
  delete b;
  return 0;
}