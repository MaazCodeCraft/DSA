#include <iostream>
using namespace std;

class A {
public:
  A() { cout << "constructor A.\n"; }
  ~A() { cout << "destructor A.\n"; }
};

class B : public A {
public:
  B() { cout << "constructor B.\n"; }
  ~B() { cout << "destructor B.\n"; }
};

int main() {
  B obj;

  cout << "code end..\n";
  return 0;
}