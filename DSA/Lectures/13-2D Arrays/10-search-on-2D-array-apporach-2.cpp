#include <iostream>
using namespace std;

pair<int, int> searchMatrix(int mat[][5], int n, int m, int tar) { // TC: O(n+m)
  int r = 0, c = m - 1;
  while (c >= 0 && r < n) {
    if (tar == mat[r][c]) {
      return make_pair(r, c);
    } else if (tar < mat[r][c]) {
      c--;
    } else {
      r++;
    }
  }
  return make_pair(-1, -1);
}

int main() {
  int mat[5][5] = {
      {1, 4, 7, 11, 15},
      {2, 5, 8, 12, 19},
      {3, 6, 9, 16, 22},
      {10, 13, 14, 17, 24},
      {18, 21, 23, 26, 30},
  };

  pair<int, int> result = searchMatrix(mat, 5, 5, 100);

  if (result.first != -1) {
    cout << "Target found at index: (" << result.first << ")(" << result.second
         << ")\n";
  } else {
    cout << "Target not found......\n";
  }
  return 0;
}