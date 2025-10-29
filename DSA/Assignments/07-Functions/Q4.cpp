#include <iostream>
using namespace std;

void largestNum(int a, int b, int c) {
  if (a >= b && a >= c) {
    cout << "a is the largest.";
  } else if (b >= c && b >= a) {
    cout << "b is the largest.";
  } else {
    cout << "c is the largest.";
  }
}

int main() {
  int a, b, c;
  cout << "Enter a number: ";
  cin >> a;
  cout << "Enter b number: ";
  cin >> b;
  cout << "Enter c number: ";
  cin >> c;
  largestNum(a, b, c);
  return 0;
}
