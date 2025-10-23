#include <iostream>
using namespace std;

int main() {
  int num;
  cout << "Enter a NUmber: ";
  cin >> num;

  int n = num;

  int ld1 = n % 10;
  n /= 10;
  int ld2 = n % 10;
  n /= 10;
  int ld3 = n % 10;
  n /= 10;

  int cubeSum = ld1 * ld1 * ld1 + ld2 * ld2 * ld2 + ld3 * ld3 * ld3;

  if (cubeSum == num) {
    cout << "Armstrong" << endl;
  } else {
    cout << "Not Armstrong" << endl;
  }

  return 0;
}