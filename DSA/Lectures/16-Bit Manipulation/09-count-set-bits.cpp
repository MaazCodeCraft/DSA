#include <iostream>
using namespace std;

int countSetBits(int n) {
  int count = 0;
  while (n > 0) {
    int ld = n & 1;
    count += ld;
    n = n >> 1;
  }
  return count;
}

int main() {
  cout << countSetBits(10);
  return 0;
}