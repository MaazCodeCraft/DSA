#include <iostream>
using namespace std;

int abSquare(int a, int b) { return (a * a) + (b * b) + 2 * (a * b); }

int main() {
  int a, b;
  cout << "Enter a number: ";
  cin >> a;
  cout << "Enter b number: ";
  cin >> b;
  cout << abSquare(a, b) << endl;
  ;
  return 0;
}
