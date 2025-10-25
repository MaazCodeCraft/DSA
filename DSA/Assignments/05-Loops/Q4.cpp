#include <iostream>
using namespace std;

int main() {

  int n;
  cout << "Enter a Number: ";
  cin >> n;

  for (int i = 2; i <= n; i++) {
    bool isPrime = true;
    int curr = i;
    for (int j = 2; j * j <= i; j++) {
      if (curr % j == 0) {
        isPrime = false;
        break;
      }
    }
    if (isPrime) {
      cout << curr << " ";
    }
  }

  return 0;
}