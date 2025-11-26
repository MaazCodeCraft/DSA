#include <iostream>
using namespace std;

class A {
  string secrete = "sectere data";
  friend class B;
  friend void revelSecrete(A &obj);
};

class B {
public:
  void showSecrete(A &obj) { cout << obj.secrete << endl; }
};

void revelSecrete(A &obj) { cout << obj.secrete << endl; }

int main() {
  A a1;
  B b1;

  b1.showSecrete(a1);
  revelSecrete(a1);
  return 0;
}