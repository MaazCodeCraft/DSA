#include <iostream>
using namespace std;

int BSInRotatedArray(int *arr, int n, int tar) {
  int st = 0, end = n - 1;
  while (st <= end) {
    int mid = (st + end) / 2;
    if (arr[mid] == tar) {
      return mid;
    }

    if (arr[st] <= arr[mid]) {
      if (arr[st] <= tar && tar <= arr[mid]) {
        end = mid - 1;
      } else {
        st = mid + 1;
      }
    } else {
      if (arr[mid] <= tar && tar <= arr[end]) {
        st = mid + 1;
      } else {
        end = mid - 1;
      }
    }
  }
  return -1;
}

int main() {
  int arr[] = {4, 5, 6, 7, 0, 1, 2};
  int n = sizeof(arr) / sizeof(int);
  cout << BSInRotatedArray(arr, n, 8) << endl;
  return 0;
}