#include <iostream>
#include <vector>
using namespace std;

void smallest(int *arr, int n) { // TC: -> O(1)
  int ans = arr[0];              // 1 ops
  cout << ans << endl;           // 2 ops
}

int main() {
  int arr[] = {1, 2, 3, 4, 5}; // already-sorted and find the smallest number
  int n = sizeof(arr) / sizeof(int);

  smallest(arr, n);

  return 0;
}