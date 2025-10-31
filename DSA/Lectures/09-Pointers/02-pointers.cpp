#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int *ptr = &a;
  cout << &a << " = " << ptr << "\n";

  float PI = 3.14;
  float *ptr2 = &PI;
  cout << &PI << " = " << ptr2 << "\n";

  cout << sizeof(ptr) << "\n";
  cout << sizeof(ptr2) << "\n";
  return 0;
}