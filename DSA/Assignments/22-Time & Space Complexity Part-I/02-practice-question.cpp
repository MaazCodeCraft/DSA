#include <iostream>
using namespace std;

int main() {
  int n = 50;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      // some constant work
    }
  }

  // outer loop                      inner loop
  // i = 0                           j = 0 to 0 => 0 * k
  // i = 1                           j = 0 to 1 => 1 * k
  // .
  // .
  // .
  // i = n - 1                        j = 0 to (n-2) => (n-2) *k

  // 0k + 1k + 2k + .... + (n-2) * k

  // k[0+1+2+3 +.... + (n-2)]

  // k * [((n-1) * (n-2)) / 2] // ignore constant and lower values
  // final TC = > O(n ^ 2)
  return 0;
}