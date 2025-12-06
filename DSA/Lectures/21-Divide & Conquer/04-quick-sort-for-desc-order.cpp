#include <iostream>
#include <vector>
using namespace std;

// Quick Sort for Descending Order

int partition(int *arr, int si, int ei) {
  int i = si - 1, pivot = arr[ei];
  for (int j = si; j < ei; j++) {
    if (arr[j] >= pivot) {
      swap(arr[++i], arr[j]);
    }
  }
  swap(arr[++i], arr[ei]);

  // pivotIdx = i
  return i;
}

void quickSort(
    int *arr,
    int si,
    int ei) { // worst case TC-> O(n^2), Avg case TC-> O(nlogn), SC: O(n)
  if (si > ei) {
    return;
  }
  int pivotIdx = partition(arr, si, ei);
  quickSort(arr, si, pivotIdx - 1); // left half
  quickSort(arr, pivotIdx + 1, ei); // right half
}

void printArr(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int arr[] = {6, 3, 7, 5, 2, 4};
  int n = sizeof(arr) / sizeof(int);
  quickSort(arr, 0, n - 1);
  printArr(arr, n);
  return 0;
}