#include <iostream>
using namespace std;

int main() {
  int a = 10;
  int *ptr = &a;
  int **pptr = &ptr;

  cout << &a << " = " << ptr << "\n";

  cout << &ptr << " = " << pptr << "\n";
  return 0;
}