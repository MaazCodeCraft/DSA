#include <iostream>
using namespace std;

void func(int mat[][3], int n, int m) {
  cout << mat << endl;
  cout << mat + 1 << endl;
  cout << mat + 2 << endl;

  cout << *(mat) << endl;
  cout << *(mat + 1) << endl;
  cout << *(mat + 2) << endl;

  cout << *(*(mat + 1) + 1) << endl;
}

void func2(int (*mat)[2], int n, int m) {}

int main() {
  int mat[3][3] = {
      {1, 2, 3},
      {4, 5, 6},
      {7, 8, 9},
  };
  func(mat, 3, 3);
  return 0;
}