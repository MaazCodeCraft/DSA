#include <iostream>
using namespace std;

int fact(int n) { // TC:-> O(n) //SC:-> O(n)
  if (n == 0) {
    return 1;
  }

  return n * fact(n - 1);
}

// TC => Total work done = recursive call * work in each call
// n             *     k

// TC-> O(n*k) ignore constant
// Final TC-> O(n)

// SC => Max Depth of recusion tree * memory in each call
// n             *     k
// Final SC-> O(n)

int main() { return 0; }