#include <iostream>
using namespace std;

void decToBin(int n) {
  int binNum = 0;
  int pow = 1;

  while (n > 0) {
    int rem = n % 2;
    binNum += pow * rem;
    n /= 2;
    pow *= 10;
  }

  cout << binNum << endl;
}

int main() {
  int n;
  cout << "Enter a NUmber : ";
  cin >> n;

  decToBin(n);

  return 0;
}