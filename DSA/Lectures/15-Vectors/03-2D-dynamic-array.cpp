#include <iostream>
using namespace std;

int main() {
  int rows, cols;

  cout << "enter rows size : ";
  cin >> rows;

  cout << "enter cols size : ";
  cin >> cols;

  int **mat = new int *[rows];

  for (int i = 0; i < rows; i++) {
    mat[i] = new int[cols];
  }

  int x = 1;
  for (int i = 0; i < rows; i++) {
    for (int j = 0; j < cols; j++) {
      mat[i][j] = x++;
      cout << mat[i][j] << " ";
    }
    cout << endl;
  }

  cout << mat[2][2] << endl;
  cout << *(*(mat + 2) + 2) << endl;

  for (int i = 0; i < rows; i++) {
    delete[] mat[i];
  }

  delete[] mat;
  return 0;
}