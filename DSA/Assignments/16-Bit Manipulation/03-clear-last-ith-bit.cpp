#include <iostream>
using namespace std;

void clearLastIthBit(int n, int i) {
  int bitMask = ~(0) << i;
  n = n & bitMask;

  cout << n << endl;
}
int main() {
  clearLastIthBit(7, 3);
  clearLastIthBit(7, 2);
  return 0;
}