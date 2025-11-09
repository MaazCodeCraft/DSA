#include <iostream>
using namespace std;

void swapping(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void printArr(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void SelectonSort(int *arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    int minIndx = i;
    for (int j = i + 1; j < n; j++) {
      if (arr[j] > arr[minIndx]) {
        minIndx = j;
      }
    }
    swapping(arr[i], arr[minIndx]);
  }
  printArr(arr, n);
}

int main() {
  int arr[] = {3, 6, 2, 1, 8, 7, 4, 5, 3, 1};
  int n = sizeof(arr) / sizeof(int);
  SelectonSort(arr, n);
  return 0;
}