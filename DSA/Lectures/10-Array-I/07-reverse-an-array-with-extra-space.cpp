#include <iostream>
using namespace std;

void printArray(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ", ";
  }
  cout << endl;
}

void reverseArray(int *arr, int n) {
  int cpyArr[n];

  for (int i = 0; i < n; i++) {
    int j = n - i - 1;
    cpyArr[i] = arr[j];
  }

  for (int i = 0; i < n; i++) {
    arr[i] = cpyArr[i];
  }
}

int main() {
  int arr[5] = {5, 4, 3, 9, 2};
  int n = sizeof(arr) / sizeof(int);
  cout << "Array : ";
  printArray(arr, n);

  reverseArray(arr, n);
  cout << "After reverse array : ";
  printArray(arr, n);

  return 0;
}