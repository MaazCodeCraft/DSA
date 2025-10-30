#include <iostream>
using namespace std;

void decToOct(int n) {
  int octNum = 0;
  int pow = 1;

  while (n > 0) {
    int rem = n % 8;
    octNum += pow * rem;
    n /= 8;
    pow *= 10;
  }

  cout << octNum << endl;
}

int main() {
  int n;
  cout << "Enter a NUmber : ";
  cin >> n;

  decToOct(n);

  return 0;
}