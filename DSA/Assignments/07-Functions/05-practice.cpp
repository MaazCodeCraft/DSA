#include <iostream>
using namespace std;

bool isPaired(int n) {
  while (n > 0) {
    int ld = n % 10;
    n /= 10;

    int ld1 = n % 10;
    n /= 10;

    if (ld != ld1) {
      return false;
    }
  }
  return true;
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;

  cout << boolalpha << isPaired(n);

  return 0;
}
