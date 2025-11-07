#include <iostream>
using namespace std;

int maxProduct(int *arr, int n) {
  int maxProd = INT_MIN;
  int currProd = 1;

  for (int i = 0; i < n; i++) {
    currProd *= arr[i];
    maxProd = max(maxProd, currProd);
    if (currProd == 0) {
      currProd = 1;
    }
  }

  currProd = 1;
  for (int i = n - 1; i >= 0; i--) {
    currProd *= arr[i];
    maxProd = max(maxProd, currProd);
    if (currProd == 0) {
      currProd = 1;
    }
  }

  return maxProd;
}

int main() {
  int arr[] = {2, 3, -2, 4};
  int n = sizeof(arr) / sizeof(int);
  cout << "Maximum Product = " << maxProduct(arr, n) << endl;
  return 0;
}