#include <iostream>
using namespace std;

void spiralMatrix(int mat[][4], int n, int m) {
  int sRow = 0, sCol = 0, eRow = n - 1, eCol = m - 1;
  while (sRow <= eRow && sCol <= eCol) {
    // Top
    for (int i = sCol; i <= eCol; i++) {
      cout << mat[sRow][i] << " ";
    }
    // Right
    for (int j = sRow + 1; j <= eRow; j++) {
      cout << mat[j][eCol] << " ";
    }
    // Bottom
    for (int i = eCol - 1; i >= sCol; i--) {
      if (sRow == eRow) {
        break;
      }
      cout << mat[eRow][i] << " ";
    }
    // Left
    for (int j = eRow - 1; j >= sRow + 1; j--) {
      if (sCol == eCol) {
        break;
      }
      cout << mat[j][sCol] << " ";
    }
    sRow++;
    sCol++;
    eRow--;
    eCol--;
  }
  cout << endl;
}

int main() {
  int matrix[4][4] = {
      {1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  spiralMatrix(matrix, 4, 4);

  int matrix2[3][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
  };

  spiralMatrix(matrix2, 3, 4);
  return 0;
}