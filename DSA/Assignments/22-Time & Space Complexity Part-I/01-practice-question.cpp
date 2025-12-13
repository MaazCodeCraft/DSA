#include <iostream>
using namespace std;

int main() {
  int n = 50;

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      // some constant work
    }
  }

  // outer loop                      inner loop
  // i = 0                           j = 1 to n => (n-1) * k
  // i = 1                           j = 2 to n => (n-2) * k
  // .
  // .
  // .
  // i = n - 1                       j = n - n - 1 =>(1*k)
  // i = n                           j = n - n => (0*k)

  // (n-1)*k + (n-2) * k + ... + 1k+ 0k (Arithmetic progression) => (n * n-1) /2

  // k [(n-1) + (n-2) + .... + 1 + 0]

  // k [(n * n-1) /2]
  // TC: => O(k * ((n^2) / 2) - (n/2)) // ignore constant and lower values

  // final TC = > O(n ^ 2)
  return 0;
}