#include <iostream>
using namespace std;

int main() {
  int n = 50;
  int k = 5;

  for (int i = 0; i < n; i = i + k) {
    for (int j = 0; j <= k; j++) {
      // some constant work called p
    }
  }

  // outer loop                      inner loop
  // i = 0                           (0 to k) = > k * p
  // i = 5                           (0 to k) = > k * p
  // .
  // .
  // .
  // i = 50                       (0 to k) = > k * p

  // (k * p) * n / k //ignore constant

  // final TC = > O(n)
  return 0;
}