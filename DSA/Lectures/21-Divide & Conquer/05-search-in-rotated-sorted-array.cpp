#include <iostream>
using namespace std;

int BSInRotatedArray(int *arr, int si, int ei, int tar) { // TC: -> O(nlogn)
  if (si > ei) {                                          // BC
    return -1;
  }

  int mid = si + (ei - si) / 2;

  if (tar == arr[mid]) {
    return mid;
  }

  if (arr[si] <= arr[mid]) { // Line 1
    if (arr[si] <= tar && tar <= arr[mid]) {
      // Left Half
      return BSInRotatedArray(arr, si, mid - 1, tar);
    } else {
      // Right Half
      return BSInRotatedArray(arr, mid + 1, ei, tar);
    }
  } else { // Line 2
    if (arr[mid] <= tar && tar <= arr[ei]) {
      // Right Half
      return BSInRotatedArray(arr, mid + 1, ei, tar);
    } else {
      // Left Half
      return BSInRotatedArray(arr, si, mid - 1, tar);
    }
  }
}

int main() {
  int arr[] = {4, 5, 6, 7, 0, 1, 2};
  int n = sizeof(arr) / sizeof(int);
  cout << "idx: " << BSInRotatedArray(arr, 0, n - 1, 0) << endl;
  return 0;
}