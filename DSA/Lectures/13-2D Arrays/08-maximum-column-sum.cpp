#include <iostream>
using namespace std;

void maxColSum(int mat[][3], int n, int m) {
  int maxColSum = INT_MIN;
  for (int i = 0; i < n; i++) {
    int currColSum = 0;
    for (int j = 0; j < m; j++) {
      currColSum += mat[j][i];
    }
    maxColSum = max(maxColSum, currColSum);
  }
  cout << "Maximum Row Sum = " << maxColSum << endl;
}

int main() {
  int matrix[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9},
  };

  maxColSum(matrix, 3, 3);
  return 0;
}