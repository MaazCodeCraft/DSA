#include <iostream>
using namespace std;

void swapping(char &a, char &b) {
  char temp = a;
  a = b;
  b = temp;
}

void printArr(char *arr, int n) {
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
}

void charSort(char *arr, int n) { // TC: O(n^2)
  for (int i = 1; i < n; i++) {
    int curr = arr[i];
    int prev = i - 1;
    while (prev >= 0 && arr[prev] < curr) {
      swapping(arr[prev], arr[prev + 1]);
      prev--;
    }
  }
  printArr(arr, n);
}

int main() {
  char ch[] = {'f', 'b', 'a', 'e', 'c', 'd'};
  int n = sizeof(ch) / sizeof(char);
  charSort(ch, n);
  return 0;
}