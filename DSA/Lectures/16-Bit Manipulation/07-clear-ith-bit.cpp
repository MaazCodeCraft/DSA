#include <iostream>
using namespace std;

int clearIthBit(int n, int i) {
  int bitMask = ~(1 << i);
  return n & bitMask;
}
int main() {
  cout << clearIthBit(6, 1) << endl;
  return 0;
}