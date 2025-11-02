#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int tar) {
  int st = 0, end = n - 1;

  while (st <= end) {
    int mid = (st + end) / 2;
    if (arr[mid] == tar) {
      cout << "target found at index(" << mid << ")";
      return mid;
    } else if (arr[mid] < tar) {
      st = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  cout << "target not found.";
  return -1;
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};
  int n = sizeof(arr) / sizeof(int);
  int tar = 10;

  binarySearch(arr, n, tar);

  return 0;
}