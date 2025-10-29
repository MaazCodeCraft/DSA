#include <iostream>
using namespace std;

int factorial(int n) {
  int fact = 1;
  for (int i = 1; i <= n; i++) {
    fact *= i;
  }
  return fact;
}

int binCoefficient(int n, int r) {
  int result = factorial(n) / (factorial(r) * factorial(n - r));
  return result;
}

int main() {
  int n, r;
  cout << "Enter total number: ";
  cin >> n;
  cout << "Enter choice: ";
  cin >> r;

  cout << "Result = " << binCoefficient(n, r) << endl;
  return 0;
}
