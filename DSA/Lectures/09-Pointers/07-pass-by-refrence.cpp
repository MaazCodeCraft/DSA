#include <iostream>
using namespace std;

// pass by refrence using pointers
void changeA(int *ptr) {
  cout << ptr << endl;
  *ptr = 20;
  cout << *ptr << endl;
}
// pass by refrence
void changeB(int &ptr) {
  cout << &ptr << endl;
  ptr = 20;
  cout << ptr << endl;
}

int main() {
  // pass by refrence using pointers
  int a = 10, b = 10;
  cout << &a << endl;
  changeA(&a);
  cout << a << endl;

  // pass by refrence
  cout << &b << endl;
  changeB(b);
  cout << b << endl;
  return 0;
}