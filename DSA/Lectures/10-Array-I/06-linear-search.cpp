#include <iostream>
using namespace std;

int linearSearch(int *arr, int n, int tar) {
  for (int i = 0; i < n; i++) {
    if (arr[i] == tar) {
      return i;
    }
  }
  return -1;
}

int main() {
  int arr[5] = {5, 4, 3, 9, 2};
  int n = sizeof(arr) / sizeof(int);
  int tar = 9;

  cout << linearSearch(arr, n, tar) << endl;
  return 0;
}