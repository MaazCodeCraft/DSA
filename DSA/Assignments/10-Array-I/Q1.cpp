#include <iostream>
using namespace std;

void sumAndProd(int *arr, int n) {
  int sum = 0, prod = 1;

  for (int i = 0; i < n; i++) {
    sum += arr[i];
    prod *= arr[i];
  }

  cout << "sum = " << sum << endl;
  cout << "product = " << prod << endl;
}

int main() {
  int arr[5] = {1, 2, 3, 4, 5};
  int n = sizeof(arr) / sizeof(int);

  sumAndProd(arr, n);
  return 0;
}