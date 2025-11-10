#include <iostream>
using namespace std;

pair<int, int> linearSearch(int mat[][3], int n, int m, int key) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (mat[i][j] == key) {
        return make_pair(i, j);
      }
    }
  }
  return make_pair(-1, -1);
}

int main() {
  int matrix[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9},
  };
  pair<int, int> result = linearSearch(matrix, 3, 3, 8);
  if (result.first != -1 && result.second != -1) {
    cout << "Element found at position: (" << result.first << ", "
         << result.second << ")" << endl;
  } else {
    cout << "Element not found." << endl;
  }
  return 0;
}