#include <iostream>
using namespace std;

int main() {

  int num;
  cout << "Enter a Number: ";
  cin >> num;

  int sum = 0;

  while (num > 0) {
    int ld = num % 10;
    sum += ld;
    num /= 10;
  }

  cout << sum << endl;

  return 0;
}