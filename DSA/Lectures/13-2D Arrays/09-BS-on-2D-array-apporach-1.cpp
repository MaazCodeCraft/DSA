#include <iostream>
using namespace std;

pair<int, int> BSonRow(int mat[][4], int m, int row, int tar) {
  int st = 0, end = m - 1;
  while (st <= end) {
    int mid = st + (end - st) / 2;
    if (tar == mat[row][mid]) {
      return make_pair(row, mid);
    } else if (tar > mat[row][mid]) {
      st = mid + 1;
    } else {
      end = mid - 1;
    }
  }
  return make_pair(-1, -1);
}

pair<int, int> BSMatrix(int mat[][4], int n, int m, int tar) {
  int sRow = 0, eRow = n - 1;
  while (sRow <= eRow) {
    int midRow = sRow + (eRow - sRow) / 2;
    if (tar >= mat[midRow][0] && tar <= mat[midRow][m - 1]) {
      return BSonRow(mat, m, midRow, tar);
    } else if (tar > mat[midRow][m - 1]) {
      sRow = midRow + 1;
    } else {
      eRow = midRow - 1;
    }
  }
  return make_pair(-1, -1);
}

int main() {
  int mat[3][4] = {
      {1, 3, 5, 7},
      {10, 11, 16, 20},
      {23, 30, 34, 60},
  };

  pair<int, int> result = BSMatrix(mat, 3, 4, 34);

  if (result.first != -1) {
    cout << "Target found at index: (" << result.first << ")(" << result.second
         << ")\n";
  } else {
    cout << "Target not found......\n";
  }
  return 0;
}