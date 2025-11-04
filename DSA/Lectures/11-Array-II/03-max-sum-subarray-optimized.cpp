#include <iostream>
using namespace std;

void maxSubarraySum(int *arr, int n) {
  int maxSum = INT_MIN;
  for (int i = 0; i < n; i++) {
    int currSum = 0;
    for (int j = i; j < n; j++) {
      currSum += arr[j];
      maxSum = max(maxSum, currSum);
    }
  }
  cout << "Maximum Subarray Sum = " << maxSum << endl;
}

int main() {
  int arr[] = {2, -3, 6, -5, 4, 2};
  int n = sizeof(arr) / sizeof(int);
  maxSubarraySum(arr, n);
  return 0;
}