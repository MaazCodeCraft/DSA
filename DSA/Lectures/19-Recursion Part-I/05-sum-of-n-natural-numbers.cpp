#include <iostream>
using namespace std;

int sum(int n) {
  if (n == 1) { // BC
    return 1;
  }
  return n + sum(n - 1); // faith, next call
}

int main() {
  cout << sum(5) << endl;

  return 0;
}