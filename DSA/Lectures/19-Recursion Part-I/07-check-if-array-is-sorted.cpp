#include <iostream>
using namespace std;

bool isSorted(int *arr, int n, int i) {
  if (i == n - 1) {
    return true;
  }

  if (arr[i] > arr[i + 1]) { // kaam
    return false;
  }

  return isSorted(arr, n, i + 1); // bharosa
}

int main() {
  int arr1[5] = {1, 2, 3, 4, 5}; // sorted : true
  int arr2[5] = {1, 2, 4, 3, 4}; // unsorted : false

  cout << boolalpha << isSorted(arr1, 5, 0) << endl;
  cout << boolalpha << isSorted(arr2, 5, 0) << endl;
  return 0;
}