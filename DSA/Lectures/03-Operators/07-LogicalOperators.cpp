#include <iostream>
using namespace std;

int main() {
  // Logical Operators

  cout << ((5 > 2) && (2 > 9)) << endl; // false
  cout << ((5 > 2) && (2 < 9)) << endl; // true

  cout << ((5 > 2) || (2 > 9)) << endl; // true
  cout << ((5 > 2) && (2 < 9)) << endl; // true

  cout << ((5 > 2) && !(2 > 9)) << endl; // true

  return 0;
}