#include <iostream>
using namespace std;

int main() {
  int arr[5] = {5, 4, 3, 9, 2};
  int n = sizeof(arr) / sizeof(int);

  // int smallest = INT_MAX;
  int smallest = arr[0];

  for (int i = 0; i < n; i++) {
    if (arr[i] < smallest) {
      smallest = arr[i];
    }
  }

  cout << "\nSmallest = " << smallest << endl;

  return 0;
}