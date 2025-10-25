#include <iostream>
using namespace std;

int main() {

  int num;
  cout << "Enter a Number: ";
  cin >> num;

  int rev = 0;

  while (num != 0) {
    int ld = num % 10;
    rev = (rev * 10) + ld;
    num /= 10;
  }

  cout << "Reversed: " << rev << endl;

  return 0;
}