#include <iostream>
using namespace std;

int main() {
  int n = 16, i, j, k = 0;
  for (i = n / 2; i <= n; i++) {
    for (j = 2; j <= n; j = j * 2) {
      k = k + n / 2;
    }
  }
  return 0;
}