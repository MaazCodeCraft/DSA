#include <iostream>
using namespace std;

class Parent {
public:
  void show() { cout << "Parent class show.\n"; }
};
class Child : public Parent {
public:
  void show() { cout << "Child class show.\n"; }
};

int main() {
  Child c1;
  c1.show(); // Compiler didnt know which function I call it parents class
             // function ot child class function // output:-> Child class show

  return 0;
}