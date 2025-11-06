#include <iostream>
using namespace std;

bool containDuplicate(int *arr, int n) { // TC: O(n ^ 2)
  bool isAllDuplicate = true;

  for (int i = 0; i < n; i++) {
    bool isDuplicate = false;
    for (int j = 0; j < n; j++) {
      if (i != j && arr[i] == arr[j]) {
        isDuplicate = true;
        break;
      }
    }
    if (!isDuplicate) {
      return false;
    }
  }
  return true;
}

int main() {
  int arr[] = {1, 2, 1, 3, 5, 3, 2};
  int n = sizeof(arr) / sizeof(int);
  cout << boolalpha << containDuplicate(arr, n) << endl;
  return 0;
}