#include <iostream>
using namespace std;

int minimumNumberOfCoin(int *arr, int n, int amount) {
  int count = 0;
  for (int i = n - 1; i >= 0; i--) {
    while (amount >= arr[i]) {
      amount -= arr[i];
      count++;
    }
  }

  if (amount != 0) {
    return -1;
  }
  return count;
}

int main() {
  int arr[] = {2, 5};
  int n = sizeof(arr) / sizeof(int);
  int amount = 3;
  int ans = minimumNumberOfCoin(arr, n, amount);

  if (ans == -1) {
    cout << "Not possible" << endl;
  } else {
    cout << ans << endl;
  }

  return 0;
}