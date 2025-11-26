#include <iostream>
using namespace std;

template <typename T> void swapping(T &a, T &b) {
  cout << "\nSwapping values...\n";
  cout << "Before: " << a << " | " << b << endl;

  T temp = a;
  a = b;
  b = temp;

  cout << "After : " << a << " | " << b << endl;
}

int main() {
  int x = 10, y = 20;
  char c1 = 'X', c2 = 'Y';
  string s1 = "Hello", s2 = "World";

  swapping(x, y);
  swapping(c1, c2);
  swapping(s1, s2);

  return 0;
}