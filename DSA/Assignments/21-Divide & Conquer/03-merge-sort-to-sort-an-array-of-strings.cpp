#include "01-merge-step.cpp"
#include <iostream>
using namespace std;

void printArr(string *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

int main() {
  string arr[] = {"sun", "earth", "mars", "mercury"};
  int n = sizeof(arr) / sizeof(arr[0]);

  mergeSort(arr, 0, n - 1);
  printArr(arr, n);
  return 0;
}