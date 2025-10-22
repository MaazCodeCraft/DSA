#include <iostream>
using namespace std;

int main() {
  // Imlicit typeCasting
  cout << (10 / 3) << endl;
  cout << (10 / 3.0) << endl;
  cout << ('A' + 1) << endl;

  // Explicit typeCasting
  cout << (char)('A' + 1) << endl;
  cout << ((float)10 / 3) << endl;
  cout << ((int)'A') << endl;
  return 0;
}