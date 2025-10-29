#include <iostream>
using namespace std;

int sumOfDigits(int n) {
  int sum = 0;

  while (n > 0) {
    int ld = n % 10;
    sum += ld;
    n /= 10;
  }
  cout << "sum of digits = " << sum << endl;
  return sum;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  sumOfDigits(n);
  return 0;
}
