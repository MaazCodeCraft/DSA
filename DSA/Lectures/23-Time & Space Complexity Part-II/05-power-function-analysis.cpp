#include <iostream>
using namespace std;

int power(int x, int n) { // TC: -> O(log n), SC:-> O(logn)
  if (n == 0) {
    return 1;
  }
  int halfPow = power(x, n / 2);
  int halfPowSq = halfPow * halfPow;

  if (n % 2 != 0) {
    return x * halfPowSq;
  }

  return halfPowSq;
}

// TC => Total work done = recursive call * work in each call
// logn                          *           k

// Final Tc = O(logn)

// SC => Max Depth of recusion tree * memory in each call
// logn                          *           k

// Final SC = O(logn)

int main() { return 0; }