#include <iostream>
using namespace std;

int main() {
  // Left shift << operator (a << b) => a * 2^b
  cout << (7 << 2) << endl; // 28
  // Right shift >> operator (a >> b) => a / 2^b
  cout << (7 >> 2) << endl; // 1
  return 0;
}