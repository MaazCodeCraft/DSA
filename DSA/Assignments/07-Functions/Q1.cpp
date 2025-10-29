#include <iostream>
using namespace std;

bool isPalindrom(int num) {
  int n = num;
  int r = 0;

  while (n != 0) {
    int ld = n % 10;
    r = r * 10 + ld;
    n /= 10;
  }
  if (r == num) {
    cout << "Palindrom." << endl;
    return true;
  } else {
    cout << "Not Palindrom." << endl;
    return false;
  }
}

int main() {
  int n;
  cout << "Enter a number: ";
  cin >> n;
  isPalindrom(n);
  return 0;
}
