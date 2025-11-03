#include <iostream>
using namespace std;

int main() {
  int x = 10;
  int *ptr = &x;

  cout << ptr << endl; // 1st
  ptr++;               // 1 int ++
  cout << ptr << endl;
  ptr--;
  cout << ptr << endl; // same as 1st

  return 0;
}