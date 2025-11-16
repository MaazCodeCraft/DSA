#include <iostream>
using namespace std;

void func() {
  int *ptr = new int;
  *ptr = 5;

  cout << *ptr << endl;
  delete ptr;
}

void funcArr() {
  int sz;
  cout << "enter array size : ";
  cin >> sz;

  int *ptr = new int[sz];
  int x = 1;

  for (int i = 0; i < sz; i++) {
    ptr[i] = x++;
    cout << ptr[i] << " ";
  }
  cout << endl;

  delete[] ptr;
}

int main() {
  funcArr();
  return 0;
}