#include <iostream>
using namespace std;

void print2DArray(int mat[][100], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }
}

void conert1DInto2D(int *arr, int totalSize, int n, int m) {
  if (n * m != totalSize) {
    cout << "Invalid dimensions\n";
    return;
  }
  int mat[100][100];
  int index = 0;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      mat[i][j] = arr[index++];
    }
  }
  print2DArray(mat, n, m);
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
  int totalSize = sizeof(arr) / sizeof(arr[0]);
  int n = 3, m = 3;
  conert1DInto2D(arr, totalSize, n, m);
  return 0;
}