#include <iostream>
using namespace std;

void binToDec(int n) {
  int decNum = 0;
  int pow = 1;

  while (n > 0) {
    int rem = n % 10;
    decNum += pow * rem;
    n /= 10;
    pow *= 2;
  }

  cout << decNum << endl;
}

int main() {
  int n;
  cout << "Enter a NUmber : ";
  cin >> n;

  binToDec(n);

  return 0;
}