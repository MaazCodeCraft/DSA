#include <iostream>
using namespace std;

void swapping(int &a, int &b) {
  int temp = a;
  a = b;
  b = temp;
}

void swapMaxAndMinInArray(int *arr, int n) {
  int maxIndex = 0, minIndex = 0;

  for (int i = 0; i < n; i++) {
    if (arr[i] > maxIndex) {
      maxIndex = i;
    }

    if (arr[i] < minIndex) {
      minIndex = i;
    }
  }
  swapping(arr[maxIndex], arr[minIndex]);
}

void printArr(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);

  swapMaxAndMinInArray(arr, n);
  printArr(arr, n);
  return 0;
}