#include <iostream>
using namespace std;

int power(int x, int n) {
  if (n == 0) {
    return 1;
  }
  int halfPow = power(x, n / 2);
  int halfPowSq = halfPow * halfPow;

  if (n % 2 != 0) {
    return x * halfPowSq;
  }

  return halfPowSq;
}

int main() {
  int x = 2, n = 10;
  cout << power(x, n) << endl;
  return 0;
}