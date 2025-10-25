#include <iostream>
using namespace std;

int main() {

  int num;
  cout << "Enter a Number: ";
  cin >> num;

  int n = num;
  int cubeSum = 0;

  while (n > 0) {
    int ld = n % 10;
    cubeSum += ld * ld * ld;
    n /= 10;
  }

  if (cubeSum == num) {
    cout << "Number is  Armstrong." << endl;
  } else {
    cout << "Number is not armstrong." << endl;
  }

  return 0;
}