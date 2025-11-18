#include <iostream>
using namespace std;

void isEven(int n) {
  if (!(n & 1)) {
    cout << "Even" << endl;
  } else {
    cout << "Odd" << endl;
  }
}
int main() {
  int n;
  cout << "enter a number : ";
  cin >> n;

  isEven(n);

  return 0;
}