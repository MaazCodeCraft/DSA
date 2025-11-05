#include <iostream>
using namespace std;

// TC: O(n) + O(n) => O(2n) => O(n) final TC = O(n)
void maxProfit(int *arr, int n) {
  int bestBuy[100000];
  bestBuy[0] = INT_MAX;

  for (int i = 1; i < n; i++) { // O(n)
    bestBuy[i] = min(arr[i - 1], bestBuy[i - 1]);
  }

  int maxProfit = 0;

  for (int i = 0; i < n; i++) { // O(n)
    int currPro = arr[i] - bestBuy[i];
    maxProfit = max(currPro, maxProfit);
  }

  cout << "Maximum profit = " << maxProfit << endl;
}

int main() {
  int prices[] = {7, 1, 5, 3, 6, 4};
  int n = sizeof(prices) / sizeof(int);
  maxProfit(prices, n);
  return 0;
}