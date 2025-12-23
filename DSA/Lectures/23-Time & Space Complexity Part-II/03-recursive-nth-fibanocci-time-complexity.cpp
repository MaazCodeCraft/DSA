#include <iostream>
using namespace std;

int fib(int n) { // TC:-> O(2^n) //SC:-> O(n)
  if (n == 0 || n == 1) {
    return n;
  }

  return fib(n - 1) + fib(n - 2);
}

// TC => Total work done = recursive call * work in each call
// 2^n             *     k

// TC-> O(2^n*k) ignore constant
// Final TC-> O(2^n)

// SC => Max Depth of recusion tree * memory in each call
// n             *     k
// Final SC-> O(n)

int main() { return 0; }