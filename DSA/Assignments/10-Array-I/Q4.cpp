#include <iostream>
using namespace std;

void findIntersectionIn2Array(int *arr1, int n1, int *arr2, int n2) {
  for (int i = 0; i < n1; i++) {
    bool isInterSect = false;
    for (int j = 0; j < n2; j++) {
      if (arr1[i] == arr2[j]) {
        isInterSect = true;
        break;
      }
    }
    if (isInterSect) {
      cout << arr1[i] << " ";
    }
  }
  cout << "\n";
}

int main() {
  int arr1[] = {1, 2, 3, 4, 5};
  int arr2[] = {1, 2, 5, 9};
  int n1 = sizeof(arr1) / sizeof(int);
  int n2 = sizeof(arr2) / sizeof(int);

  findIntersectionIn2Array(arr1, n1, arr2, n2);
  return 0;
}