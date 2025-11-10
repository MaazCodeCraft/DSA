#include <iostream>
using namespace std;

void maxRowSum(int mat[][3], int n, int m) {
  int maxRSum = INT_MIN;
  for (int i = 0; i < n; i++) {
    int currRowSum = 0;
    for (int j = 0; j < m; j++) {
      currRowSum += mat[i][j];
    }
    maxRSum = max(maxRSum, currRowSum);
  }
  cout << "Maximum Row Sum = " << maxRSum << endl;
}

int main() {
  int matrix[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9},
  };

  maxRowSum(matrix, 3, 3);
  return 0;
}