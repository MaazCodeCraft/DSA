#include <iostream>
using namespace std;

void printMatrix(int mat[][3], int n) { // TC: -> O(n * k) * n times => O(n^2)
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int mat[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

  printMatrix(mat, 3);

  return 0;
}