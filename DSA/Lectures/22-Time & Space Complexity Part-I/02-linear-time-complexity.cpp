#include <iostream>
#include <vector>
using namespace std;

void printArr(int *arr, int n) { // TC: -> O(n)
  for (int i = 0; i < n; i++) {  // worst case O(n)
    cout << arr[i] << " ";
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);

  printArr(arr, n);

  return 0;
}