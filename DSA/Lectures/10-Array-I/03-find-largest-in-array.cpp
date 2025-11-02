#include <iostream>
using namespace std;

int main() {
  int arr[5] = {5, 4, 3, 9, 2};
  int n = sizeof(arr) / sizeof(int);

  // int largest = INT_MIN;
  int largest = arr[0];

  for (int i = 0; i < n; i++) {
    if (arr[i] > largest) {
      largest = arr[i];
    }
  }

  cout << "\nLargest = " << largest << endl;

  return 0;
}