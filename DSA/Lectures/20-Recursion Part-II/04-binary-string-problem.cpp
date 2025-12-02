#include <iostream>
using namespace std;

void binaryStringProblem(int n, int lastPlace, string ans) {
  if (n == 0) { // BC
    cout << ans << endl;
    return;
  }

  if (lastPlace != 1) {
    binaryStringProblem(n - 1, 0, ans + '0');
    binaryStringProblem(n - 1, 1, ans + '1');
  } else {
    binaryStringProblem(n - 1, 0, ans + '0');
  }
}

int main() {
  string ans = "";
  binaryStringProblem(3, 0, ans);
  return 0;
}