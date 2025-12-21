#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        swap(arr[j], arr[j + 1]);
      }
    }
  }
}

// outer loop                      inner loop
// i = 0                           ((n-1) * k)
// i = 1                           ((n-2) * k)
// .
// .
// .
// i = n-1                         1*k

// (n-1)*k + (n-2) * k + ... + 1k (Arithmetic progression) => (n * n-1) /2

// k [(n-1) + (n-2) + .... + 1]

// k [(n * n-1) /2]
// TC: => O(k * ((n^2) / 2) - (n/2)) // ignore constant and lower values

// final TC = > O(n ^ 2)

int main() { return 0; }