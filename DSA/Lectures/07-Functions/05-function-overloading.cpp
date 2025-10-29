#include <iostream>
using namespace std;

int sum(int a, int b) {
  cout << a + b << endl;
  return a + b;
}

int sum(double a, double b) {
  cout << a + b << endl;
  return a + b;
}

int sum(double a, double b, double c) {
  cout << a + b + c << endl;
  return a + b + c;
}

int main() {
  sum(10, 20);
  sum(1.5, 2.5);
  sum(10, 20, 30);
  return 0;
}
