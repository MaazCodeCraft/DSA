#include <iostream>
using namespace std;

int main() {
  // Case 1:
  int arr[50]; // stored garbaged values

  // Case 2:
  int arr1[50] = {1, 2, 3}; // 1, 2, 3, 0, 0, 0, ...., 0

  // Case 3:
  int arr2[] = {1, 2, 3}; // 1, 2, 3

  // Case 4:
  int arr3[5] = {1, 2, 3, 4, 5}; // 1, 2, 3, 4, 5
  return 0;
}