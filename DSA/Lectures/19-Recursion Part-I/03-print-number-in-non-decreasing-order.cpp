#include <iostream>
using namespace std;

void print(int n) {
  if (n == 0) { // BC
    return;
  }
  print(n - 1);     // faith, next call
  cout << n << " "; // kaam
}

int main() {
  print(5);
  return 0;
}