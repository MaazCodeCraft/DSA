#include <iostream>
using namespace std;

int sum(int n) { // TC:-> O(n) //SC:-> O(n)
  if (n == 0) {
    return 0;
  }

  return n + sum(n - 1);
}

// TC => Total work done = recursive call * work in each call //Apporach-I

// TC => Recurence Realation //Apporach-II
// SC => Max Depth of recusion tree * memory in each call

int main() { return 0; }