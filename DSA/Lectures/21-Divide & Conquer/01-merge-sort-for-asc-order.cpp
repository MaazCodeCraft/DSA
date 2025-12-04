#include <iostream>
#include <vector>
using namespace std;

// Merge Sort for Ascending Order

void merge(int *arr, int si, int mid, int ei) { // TC: O(n)

  vector<int> temp;
  int i = si;
  int j = mid + 1;

  while (i <= mid && j <= ei) {
    if (arr[i] <= arr[j]) {
      temp.push_back(arr[i++]);
    } else {
      temp.push_back(arr[j++]);
    }
  }

  while (i <= mid) {
    temp.push_back(arr[i++]);
  }

  while (j <= ei) {
    temp.push_back(arr[j++]);
  }

  for (int i = si, x = 0; i <= ei; i++) {
    arr[i] = temp[x++];
  }
}

void mergeSort(int *arr, int si, int ei) { // TC: O(n) * O(log n) => O(nlogn)
  if (si >= ei) {
    return;
  }

  int mid = si + (ei - si) / 2;

  mergeSort(arr, si, mid);     // left
  mergeSort(arr, mid + 1, ei); // right

  merge(arr, si, mid, ei); // conquer
}

void printArr(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  int arr[] = {6, 3, 7, 5, 2, 4};
  int n = sizeof(arr) / sizeof(int);

  mergeSort(arr, 0, n);
  printArr(arr, n);
  return 0;
}