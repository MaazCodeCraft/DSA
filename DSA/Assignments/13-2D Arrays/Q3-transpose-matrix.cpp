#include <iostream>
using namespace std;

void transposeMatrix(int mat[][3], int row, int col) {
  int transpose[col][row] = {{0}};

  for (int i = 0; i < row; i++) {
    for (int j = 0; j < col; j++) {
      transpose[j][i] = mat[i][j];
    }
  }

  for (int i = 0; i < col; i++) {
    for (int j = 0; j < row; j++) {
      cout << transpose[i][j] << " ";
    }
    cout << endl;
  }
}

int main() {
  int mat[2][3] = {
      {4, 7, 8},
      {11, 4, 3},
  };

  transposeMatrix(mat, 2, 3);
  return 0;
}