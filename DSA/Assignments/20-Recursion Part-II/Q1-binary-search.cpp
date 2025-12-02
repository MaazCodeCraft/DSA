#include <iostream>
using namespace std;

int binarySearch(int *arr, int st, int end, int tar) {
  if (st > end) { // BC
    return -1;
  }
  int mid = st + (end - st) / 2;
  if (arr[mid] == tar) {
    return mid;
  } else if (arr[mid] > tar) {
    return binarySearch(arr, st, mid - 1, tar);
  } else {
    return binarySearch(arr, mid + 1, end, tar);
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7};
  int tar = 4;
  int end = sizeof(arr) / sizeof(int);
  cout << binarySearch(arr, 0, end, tar) << endl;
  return 0;
}