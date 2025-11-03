#include <iostream>
using namespace std;

void printUniqueNumberInArr(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    bool isUnique = true;
    for (int j = 0; j < n; j++) {
      if (i != j && arr[i] == arr[j]) {
        isUnique = false;
        break;
      }
    }
    if (isUnique) {
      cout << arr[i] << " ";
    }
  }
  cout << "\n";
}

int main() {
  int arr[] = {1, 2, 3, 1, 2, 3, 4};
  int n = sizeof(arr) / sizeof(int);

  printUniqueNumberInArr(arr, n);
  return 0;
}