#include <iostream>
using namespace std;

int main() {
  // Unary Operators
  int a = 3;
  a++;
  cout << a << endl; // 4
  ++a;
  cout << a << endl; // 5

  --a;
  cout << a << endl; // 4
  a--;
  cout << a << endl; // 3

  cout << a++ << endl; // 3
  cout << ++a << endl; // 5

  return 0;
}