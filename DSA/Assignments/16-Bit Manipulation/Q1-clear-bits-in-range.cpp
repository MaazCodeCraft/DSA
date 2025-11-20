#include <iostream>
using namespace std;

void clearBitsInRange(int n, int i, int j) {
  int a = ~(0) << (j + 1);
  int b = (1 << i) - 1;
  int mask = a | b;

  n = n & mask;
  cout << n << endl;
}
int main() {
  clearBitsInRange(15, 1, 3);
  return 0;
}