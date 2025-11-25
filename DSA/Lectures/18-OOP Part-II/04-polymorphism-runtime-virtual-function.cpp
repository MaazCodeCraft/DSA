#include <iostream>
using namespace std;

class Parent {
public:
  virtual void hello() { cout << "Parent hello.\n"; }
};
class Child : public Parent {
public:
  void hello() { cout << "Child hello\n"; }
};

int main() {
  Child c1;
  Parent *ptr;
  ptr = &c1;    // Runtime binding
  c1.hello();   // direct call → Child hello
  ptr->hello(); // polymorphism → Child hello (due to virtual function)
  return 0;
}