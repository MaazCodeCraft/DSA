#include <iostream>
using namespace std;

void printArray(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ", ";
  }
  cout << endl;
}

void swapping(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void reverseArray(int *arr, int n) {
  int st = 0, end = n - 1;
  while (st < end) {
    swapping(arr[st++], arr[end--]);
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