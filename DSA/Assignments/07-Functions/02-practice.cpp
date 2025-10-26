#include <iostream>
using namespace std;

bool isEven(int a) { return a % 2 == 0; }

int main() {
  cout << boolalpha << isEven(5) << endl;
  cout << boolalpha << isEven(6) << endl;

  return 0;
}
