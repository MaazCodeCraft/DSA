#include <iostream>
using namespace std;

int main() {

  int num;
  cout << "Enter a Number: ";
  cin >> num;

  while (num > 0) {
    int ld = num % 10;
    cout << ld;
    num /= 10;
  }

  return 0;
}