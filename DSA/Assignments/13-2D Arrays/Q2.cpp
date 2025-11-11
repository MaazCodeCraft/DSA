#include <iostream>
using namespace std;

void secRowSum(int mat[][3], int m) {
  int sum = 0;
  for (int i = 0; i < m; i++) {
    sum += mat[1][i];
  }

  cout << "Sum of 2nd Row = " << sum << endl;
}

int main() {
  int mat[3][3] = {
      {4, 7, 8},
      {11, 4, 3},
      {2, 2, 3},
  };

  secRowSum(mat, 3);
  return 0;
}