#include <iostream>
using namespace std;

void rotatedMatrix(int mat[][3], int n) {
  int sRow = 0, eRow = n - 1, sCol = 0;
  while (sCol < n) {
    for (int i = eRow; i >= sRow; i--) {
      cout << mat[i][sCol] << " ";
    }
    cout << "\n";
    sCol++;
  }
}

int main() {
  int mat[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9},
  };

  rotatedMatrix(mat, 3);
  return 0;
}